BGOpen("ho210",0);
SEPlay("EV_SE_663");
SEWait();
VoicePlay("I240000000_42_000");
MsgDisp("Manager","Thank you for calling, this is Habataki
Books.");
MsgDisp("主人公","It's
｛主人公苗字｝. I
apologize, but I'd like to quit my
part-time job...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("I240000000_42_010");
MsgDisp("Manager","I see...
I understand.
Thank you for everything until now.");
MsgDisp("主人公","Thank you for looking after me.
Bye...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("","(I quit my part-time job at Habataki
Bookstore.)");
MsgClose();
