MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChMouthOpenLevel(4,0);
VoicePlay("B150400500_04_000");
MsgDisp("Nanatsumori","............");
MsgDisp("主人公","......Are you angry?");
ChMouthOpenLevel(4,#1);
VoicePlay("B150400500_04_010");
MsgDisp("Nanatsumori","......No.");
MsgDisp("主人公","Really?");
VoicePlay("B150400500_04_020");
MsgDisp("Nanatsumori","Yeah.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,1,1);
VoicePlay("B150400500_04_030");
MsgDisp("Nanatsumori","I've gotten used to it..
or rather, I've already given up.");
MsgDisp("主人公","?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B150400500_04_040");
MsgDisp("Nanatsumori","Do you remember this retaliation?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChClose(4,0,30);
ChLayout(0);
ChNanaType(#1);
ChOpen(4,255,0,0,3,#1,#1,0,0,0,60);
MsgDisp("主人公","Eh?");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_551");
SEWait();
VoicePlay("B150400500_04_050");
MsgDisp("Nanatsumori","Haa...");
MsgDisp("主人公","Ughー... ｛七ツ森＊｝, it hurts.");
VoicePlay("B150400500_04_060");
MsgDisp("Nanatsumori","I bet.
I'm holding you with all my strength.");
MsgDisp("主人公","(What should I do? I can almost hear my
heart racing... )");
VoicePlay("B150400500_04_070");
MsgDisp("Nanatsumori","............");
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","Haa...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B150400500_04_080");
MsgDisp("Nanatsumori","Your face is red.
Are you embarrassed?
Is your heart racing?");
MsgDisp("主人公","Both!");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("B150400500_04_090");
MsgDisp("Nanatsumori","Haha!
Serves you right.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.3,0.6);
ChClose(4,0,30);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,255,0,4,3,#1,#1,0,0,0,60);
MsgDisp("主人公","｛七ツ森＊｝, you're so mean...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B150400500_04_100");
MsgDisp("Nanatsumori","You're the one who's mean.
Truth is you like it.");
ChMotion(4,0,1);
VoicePlay("B150400500_04_110");
MsgDisp("Nanatsumori","From now on, touch me as much as you'd
like.
And I'll do the same.");
ChMotion(4,1,1);
VoicePlay("B150400500_04_120");
MsgDisp("Nanatsumori","We're in mutual agreement.
It's okay.
See you then.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4,0,30);
MsgDisp("主人公","(I-Is it o-okay?)");
MsgClose();
ScrFadeOut(0,0);
