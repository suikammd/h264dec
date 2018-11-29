## rtsp协议解析

> rtsp协议解析（FPGA实现）

### rtsp介绍
rtsp是应用层协议，定义传送的数据类型和编码格式（本文采用h264编码），还决定了端口号和rtp和rtcp是采用udp还是采用tcp。默认端口号是554.

* 客户端协议格式
> 第一行: 方法名:xxx\r\n
>
> 第二行: Cseq:xxx\r\n
>
> 第三行: xxx\r\n
>
> \r\n

* 服务端协议格式
> 第一行: RTSP/1.0 xxx\r\n
> 
> 第二行: Cseq:xxx\r\n
> 
> 第三行: xxx\r\n
> 
> \r\n

### 利用vlc播放器和wireshark研究数据是如何交互的
* 在wireshark过滤栏输入“rtsp”
* 在vlc播放器输入海康相机地址
* 点击播放之后退出播放器
* 分析wireshark数据

> 大致请求过程是这样的：

| Client   |     | Server |
| -------- | --- | ------ |
| OPTIONS  | ->  |
|          | <-  | 200 OK |
| DESCRIBE | ->  |
|          | <-  | 200 OK |
| SETUP    | ->  |
|          | <-  | 200 OK |
| PLAY     | ->  |        |
|          | <-  | 200 OK |
| TERMDOWN | ->  |        |
|          | <-  | 200 OK |





