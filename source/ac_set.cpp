///////执行目标值, 关Y秒，开X秒, A是开，B是关 。
U8 ACSet::Angle_auto_control(U16 X, U16 Y, U8 A, U8 B)
{
	U16 a = 100 * X; // 10ms*100=1s
	U16 b = 100 * Y;
    int flag=0;
	switch (flag)
    {
    case 0:
        timer_begin1=sys_time();
        ACSet::Damper_action=10;
        flag=1;
        break;
    
    
    default:
        break;
    }
}