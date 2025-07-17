BGOpen("ho210",0);
SEPlay("EV_SE_663");
SEWait();
VoicePlay("I340000000_43_000");
MsgDisp("Manager","Yes, this is Cafe Alucard.");
MsgDisp("主人公","It's ｛主人公苗字｝.
I apologize, but I'd like to quit my
part-time job...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("I340000000_43_010");
MsgDisp("Manager","... It's too bad, but there's no helping
it.
Thanks for everything until now.");
MsgDisp("主人公","Thank you for looking after me.
Bye...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("","(I quit my part-time job at Cafe Alucard.)");
MsgClose();
