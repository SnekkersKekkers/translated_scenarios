BGOpen("ho100",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming!");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.5);
BGMPlay("BGM_C04_NANA_A");
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
VoicePlay("K020400001_04_000");
MsgDisp("Nanatsumori","Hey.
Sorry for coming so late.");
MsgDisp("主人公","｛七ツ森＊｝!?
What's up so suddenly?");
SEPlay("EV_SE_665");
SEWait();
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("K020400001_04_010");
MsgDisp("Nanatsumori","I came to give you a birthday present.
I wanted to give it to you on that day,
but I couldn't.");
MsgDisp("主人公","That's...
Thank you for going out of your way!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("K020400001_04_020");
MsgDisp("Nanatsumori","No problem.
It's late, but happy birthday.");
MsgDisp("主人公","Thank you, ｛七ツ森＊｝.");
VoicePlay("K020400001_04_030");
MsgDisp("Nanatsumori","Yeah.
Well, see you at school.");
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
MsgClose();
ChClose(4,0,30);
Wait(30);
MsgDisp("主人公","(I got a present from
｛七ツ森＊｝! )");
MsgClose();
ScrFadeOut(0,0);
