BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","(It's kind of empty today.
Not even ｛七ツ森＊｝ seems to be
here...)");
MsgClose();
SEPlay("EV_SE_DOOR_014");
Wait(50,0);
SEPlay("EV_SE_FOOT_RUN_COME_ALONE",0,1);
Wait(60,0);
BGMPlay("BGM_C04_NANA_A");
ChLayout(1);
ChNanaType(0);
ChOpen(4,255,0,2,1,#1,#1,0,0,0,60);
MsgDisp("主人公","Welcome?
Huh?");
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("G110400703_04_000");
MsgDisp("Nanatsumori","I'm sorry!
I was a bit...");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(4,0,30);
SEWait();
VoicePlay("G110400703_04_010");
MsgDisp("Nanatsumori","Excuse me, Owner.
Can I use your changing room?");
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
MsgClose();
SEPlay("EV_SE_544");
ChLayout(1);
ChNanaType(1);
ChOpen(4,35,0,2,0,#1,#1,0,0,0,60);
VoicePlay("G110400703_04_020");
MsgDisp("Nanatsumori","Sorry again.
Thank you very much for your help.");
SEPlay("EV_SE_753");
SEWait();
SEPlay("EV_SE_753");
SEWait();
ChEye(4,5);
ChMouth(4,1);
ChMotion(4,5,1);
VoicePlay("G110400703_04_030");
MsgDisp("Nanatsumori","No way, someone's calling me∋");
MsgClose();
SEStop("EV_SE_579",0);
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(4,0,30);
SEWait();
SEPlay("EV_SE_DOOR_014");
MsgDisp("主人公","(He seems kind of busy...)");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_014");
BGMVol(0.5,2);
ChLayout(1);
ChNanaType(1);
ChOpen(4,35,0,0,2,#1,#1,0,0);
Wait(30,1);
ScrFadeIn(0);
MsgDisp("主人公","Ah...");
ChMotion(4,4,1);
VoicePlay("G110400703_04_040");
MsgDisp("Nanatsumori","One cup of joe please.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4,0,30);
MsgDisp("主人公","???");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,1,1,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110400703_04_050");
MsgDisp("Nanatsumori","The photo shoot has been rescheduled for a
week from now...");
MsgDisp("主人公","Ah!
It was moved to next week?
Either way, that's a relief.");
ChEye(4,1);
ChMouth(4,2);
ChMotion(4,2);
VoicePlay("G110400703_04_060");
MsgDisp("Nanatsumori","That's what happened.
I didn't want to be late.");
MsgDisp("主人公","Hehe.
Please take this time for yourself today
then.");
ChMotion(4,1);
VoicePlay("G110400703_04_070");
MsgDisp("Nanatsumori","I will.");
MsgDisp("主人公","Nana-kun is a pretty cool model, huh?");
ChEye(4,1);
ChMouth(4,2);
ChMotion(4,0);
VoicePlay("G110400703_04_080");
MsgDisp("Nanatsumori","Aah...that's enough, it can be a pain
sometimes.");
MsgDisp("主人公","(｛七ツ森＊｝ seems very serious about his
work.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
