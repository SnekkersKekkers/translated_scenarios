BGOpen("ho210",0);
SEPlay("EV_SE_663");
SEWait();
VoicePlay("I140000000_45_000");
MsgDisp("Manager","Thank you for calling.
This is General Store Simon.");
MsgDisp("主人公","It's
｛主人公苗字｝. I
apologize, but I'd like to quit my
part-time job......");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("I140000000_45_010");
MsgDisp("Manager","...... It's too bad, but there's no
helping it.
Thank you for everything until now.");
MsgDisp("主人公","Thank you for looking after me.
Bye......");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("","(I quit my part-time job at General Store
Simon.)");
MsgClose();
