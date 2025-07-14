ScrFadeIn(0);
VoicePlay("P840300002_48_000");
MsgDisp("School Girl","Excuse meー...
I want a vinyl string but...
...Do you have any?");
MsgDisp("主人公","Ah, yes, here you go.");
VoicePlay("P840300002_48_010");
MsgDisp("School Girl","Yes!
I'm sorry for asking so many times...");
MsgDisp("主人公","Please don't mind it.
Come back anytime!");
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,0,4,0,#1,#1,0,0);
VoicePlay("P840300002_03_000");
MsgDisp("Honda","Hーm, I'm sure that your smile at the end,
made that girl super relieved.");
MsgDisp("主人公","Eh?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P840300002_03_010");
MsgDisp("Honda","You're amazing after all. Not only are you
perfect at materials management, but
you're also kind and considerate.");
MsgDisp("主人公","(Hehe, I was praised by ｛本多＊＊｝! )");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
