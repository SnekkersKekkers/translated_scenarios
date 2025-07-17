BGOpen("ho210",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
VoicePlay("C010500000_05_000");
MsgDisp("Hiiragi","Yes, this is Hiiragi.");
MsgDisp("主人公","Ah, ｛柊＊＊＊｝?
It's ｛主人公苗字｝...");
VoicePlay("C010500000_05_010");
MsgDisp("Hiiragi","... Yes.
What business is this regarding?");
MsgDisp("主人公","(Umm, this feels awkward...
But if I don't explain it now...)");
MsgDisp("主人公","S-So...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("C010500000_05_020");
MsgDisp("Hiiragi","...I should have properly spoken with you
sooner.");
VoicePlay("C010500000_05_030");
MsgDisp("Hiiragi","Because I misunderstood, you were made to
suffer such unpleasantry.
Please forgive me.");
MsgDisp("主人公","No, I'm the one who's sorry.");
VoicePlay("C010500000_05_040");
MsgDisp("Hiiragi","... Mm.
Thank you for calling me.
I'm glad we were able to have this talk.");
VoicePlay("C010500000_05_050");
MsgDisp("Hiiragi","Then, until next time.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Thank goodness...
Looks like we were able to make up.)");
MsgClose();
