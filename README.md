H264Dec
========
This programs connects to a RTSP server and record
in a file the H264 incoming stream.

Known Bugs:
-----------
RTCP support is partially broken and not well defined,
so some servers can complain about the stats and close
the connections.

* 增加rtsp auth部分，见rtsp_cmd_describe_password，可以
在rtsp.h中配置USERNAME、PASSWORD、REALM 

* 在rtsp.c中修改为结构体p赋值，结构体p的参数分别是dump：h264file, name: 通道名称，默认ch1可用，是stream：按照对应的形式写即可 

> 上述参数配置完成后，编译完利用ffmpeg转换成MP4即可播放

* 下面写了一些我对rtsp的理解 见[rtsp协议理解](https://github.com/suikammd/h264dec/blob/master/rtsp_intro.md) 

> Cross-compile for arm, check ARMMAKEFILE(not test, maybe modify in future)
