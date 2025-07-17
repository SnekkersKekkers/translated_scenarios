BGOpen("ho210",0);
SEPlay("EV_SE_663");
SEWait();
VoicePlay("I740000000_36_000");
MsgDisp("President","Yes, this is Gradius Debugging.");
MsgDisp("主人公","It's ｛主人公苗字｝.
I apologize, but I'd like to quit my
part-time job...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("I740000000_36_010");
MsgDisp("President","I understand.
Thank you for everything until now.");
MsgDisp("主人公","Thank you for looking after me.
Bye...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("","(I quit my job as a debugger at Gradius
Debugging.)");
MsgClose();
