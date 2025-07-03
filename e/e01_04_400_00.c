BGOpen("wf100",1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("E010440000_21_000");
MsgDisp("Michiru?","No way.
I can't do that......");
VoicePlay("E010440000_04_000");
MsgDisp("Nanatsumori?","Really?
Could it be Michiru is actually quite shy?");
MsgDisp("主人公","(Hm?
That voice just now was......)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,255,0,0,3,-1,-1,0,1);
ChOpen(21,255,3,0,4,-1,-1,0,2);
MsgDisp("主人公","(｛七ツ森＊｝ and ｛みちる＊｝!)");
VoicePlay("E010440000_21_010");
MsgDisp("Michiru","You don't need to be surprised about it. ");
ChEye(4,1);
ChMouth(4,3);
VoicePlay("E010440000_04_010");
MsgDisp("Nanatsumori","You act so cool at school, though.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("E010440000_21_020");
MsgDisp("Michiru","Minoru-kun is surprisingly mean.
I'll be heading home now. See you.");
ChEye(4,0);
ChMouth(4,0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(21,0,30);
ChPosition(4,0);
MsgDisp("主人公","(｛みちる＊｝, is gone.)");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("E010440000_04_020");
MsgDisp("Nanatsumori","............");
ChEye(4,0);
ChMotion(4,0,1);
VoicePlay("E010440000_04_030");
MsgDisp("Nanatsumori","Aha, there you are.");
MsgDisp("主人公","∈");
ChEye(4,2);
VoicePlay("E010440000_04_040");
MsgDisp("Nanatsumori","You should join the conversation
next time instead of eavesdropping.");
MsgDisp("主人公","Y-yeah.
But you two are from another league
so I felt hesitant......");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("E010440000_04_050");
MsgDisp("Nanatsumori","What do you mean?");
MsgDisp("主人公","You both seem more... mature,
or something like that?");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010440000_04_060");
MsgDisp("Nanatsumori","......Hmph!
Aren't Michiru and I the same age as you?");
MsgDisp("主人公","That's true.
By the way, what were you talking about?
｛みちる＊｝ 's face was bright red.");
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,4,1);
VoicePlay("E010440000_04_070");
MsgDisp("Nanatsumori","That's...... a secret.
It'd be troublesome if she knew you
found out, you know?");
MsgDisp("主人公","(I'm...... so curious......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
