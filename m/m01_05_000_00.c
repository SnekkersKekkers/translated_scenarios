SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Come in.");
VoicePlay("M010500000_05_000");
MsgDisp("Hiiragi?","Good evening, pardon my suddenness.");
MsgDisp("主人公","Eh, ｛柊＊＊＊｝∋");
VoicePlay("M010500000_05_010");
MsgDisp("Hiiragi","How are you fairing?");
MsgDisp("主人公","Mm, I've gotten a lot better.
Sorry...
I made you worry.");
VoicePlay("M010500000_05_020");
MsgDisp("Hiiragi","...I see. I can be at ease now that I've
heard your voice. Please rest. Well, then.");
MsgDisp("主人公","Eh∋
Wait a minute...!");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A");
ChOpen(5,255,2,4,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("M010500000_05_030");
MsgDisp("Hiiragi","I apologize, especially when you are
unwell.
To get so caught up in talking...");
MsgDisp("主人公","No, it's okay.
I'm more or less better now.");
ChMotion(5,4);
VoicePlay("M010500000_05_040");
MsgDisp("Hiiragi","Then, for the moment, I'm relieved.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("M010500000_05_050");
MsgDisp("Hiiragi","Yes, these past few days, I have come to
understand something.");
MsgDisp("主人公","Understand something?");
ChEye(5,4);
ChMouth(5,4);
VoicePlay("M010500000_05_060");
MsgDisp("Hiiragi","Despite knowing you were absent, my eyes
were seeking you out.");
ChEye(5,2);
ChMotion(5,1);
VoicePlay("M010500000_05_070");
MsgDisp("Hiiragi","I became a wandering-eyed, and strange
person.");
MsgDisp("主人公","Hehe, ｛柊＊＊＊｝, that doesn't sound like
you.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("M010500000_05_080");
MsgDisp("Hiiragi","With that, a smile that is more like you
has returned to your face, yes?");
MsgDisp("主人公","Mm, thanks.
Thanks to ｛柊＊＊＊｝ I feel a lot better
already!");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("M010500000_05_090");
MsgDisp("Hiiragi","Now, don't get ahead of yourself.");
ChMotion(5,0);
VoicePlay("M010500000_05_100");
MsgDisp("Hiiragi","For now, please continue to exercise
restraint. Please quickly return to full
health and then you may attend class.");
MsgDisp("主人公","Yes.
｛柊＊＊＊｝, you're like a doctor.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,2);
VoicePlay("M010500000_05_110");
MsgDisp("Hiiragi","Whatever it may take.
If you don't recover soon, I will be
established as a shifty-eyed oddity.");
MsgDisp("主人公","Mm, got it.
Sorry for worrying you.");
ChEye(5,4);
ChEye(5,4);
ChMotion(5,0);
VoicePlay("M010500000_05_120");
MsgDisp("Hiiragi","Then, next time, at school.");
MsgDisp("主人公","Thanks for today.");
MsgClose();
SEPlay("EV_SE_690",0.2,0.5);
BGMStop();
ChClose(5);
Wait(50,1);
SEStop("EV_SE_690",0.5);
SEPlay("EV_SE_DOOR_008",0,0.5);
SEWait();
MsgDisp("主人公","(I made ｛柊＊＊＊｝ worry.
I have to get better fast...!)");
