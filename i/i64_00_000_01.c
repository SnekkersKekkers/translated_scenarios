BGOpen("ho210",0);
SEPlay("EV_SE_663");
SEWait();
VoicePlay("I640000001_40_000");
MsgDisp("Manager","Thank you for calling.
This is Stallion Gasoline.");
MsgDisp("主人公","It's ｛主人公苗字｝.
I apologize, but I'd like to quit my
part-time job...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("I640000001_40_010");
MsgDisp("Manager","I see...it's too bad, but thanks for all
you've done.");
MsgDisp("主人公","Thank you for looking after me.
Bye...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("","(I quit my job at Stallion Gasoline.)");
MsgClose();
