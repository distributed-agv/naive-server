import grpc
import guide_pb2
import guide_pb2_grpc


def main():
    channel = grpc.insecure_channel('localhost:50051')
    stub = guide_pb2_grpc.GuideStub(channel)
    
    while True:
        line = input()
        tokens = line.split()
        car_id = int(tokens[0])
        cur_row_idx = int(tokens[1])
        cur_col_idx = int(tokens[2])
        goal_row_idx = int(tokens[3])
        goal_col_idx = int(tokens[4])
        car_state = guide_pb2.CarState(
            car_id=car_id,
            cur_row_idx=cur_row_idx,
            cur_col_idx=cur_col_idx,
            goal_row_idx=goal_row_idx,
            goal_col_idx=goal_col_idx,
        )

        try:
            step = stub.GetNextStep(car_state)
            print(step)
        except grpc.RpcError as e:
            print(e.code())


if __name__ == '__main__':
    main()
