BGOpen("ho210",0);
SEPlay("EV_SE_663");
SEWait();
VoicePlay("I540000000_49_000");
MsgDisp("Manager","Thank you for calling.
This is Princess Tsubaki Japanese Sweets.");
MsgDisp("主人公","It's ｛主人公苗字｝.
I apologize, but I'd like to quit my
part-time job...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("I540000000_49_010");
MsgDisp("Manager","Oh my, I see...
I feel bad for Michiru- No, it's nothing.");
VoicePlay("I540000000_49_020");
MsgDisp("Manager","Thank you for your hard work until now.");
MsgDisp("主人公","Thank you for looking after me.
Bye...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("","(I quit my part-time job at Princess
Tsubaki Japanese Sweets.)");
MsgClose();
