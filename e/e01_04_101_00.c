BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Well, I think I'll go home now.");
MsgDisp("主人公","......Huh?
Something fell.");
SEPlay("EV_SE_641",0,0.8);
SEWait();
MsgDisp("主人公","It looks like a men's bracelet.
Maybe someone lost it.
I'll take it to the police station-");
VoicePlay("E010410100_04_000");
MsgDisp("Nanatsumori?","Ah...... Right on time!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
BGMPlay("BGM_C04_NANA_A",0.01);
ChNanaType(1);
ChOpen(4,35,0,2,1,-1,-1,0,0,0,60);
MsgDisp("主人公","Ah, ｛七ツ森＊｝!
Are you on your way to work?");
ChMotion(4,1,1);
VoicePlay("E010410100_04_010");
MsgDisp("Nanatsumori","That's right, but......
Have you seen a silver bracelet
around here?");
MsgDisp("主人公","Could this be it?");
SEPlay("EV_SE_641",0,0.9);
SEWait();
ChEye(4,5);
ChMouth(4,5);
ChMotion(4,0,1);
VoicePlay("E010410100_04_020");
MsgDisp("Nanatsumori","There it is!
Yes, that's the one!");
MsgDisp("主人公","So that bracelet was yours, ｛七ツ森＊｝.
What a coincidence.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("E010410100_04_030");
MsgDisp("Nanatsumori","Phew, I'm saved......
I just received this bracelet today,
so losing it would've been sad......");
MsgDisp("主人公","Oh is that so? ∋
Be careful not to lose it again, okay?");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
ChEyeOpenLevel(4,8);
VoicePlay("E010410100_04_040");
MsgDisp("Nanatsumori","Yeah......");
MsgDisp("主人公","That bracelet is really cool.
It suits ｛七ツ森＊｝ a lot.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010410100_04_050");
MsgDisp("Nanatsumori","Thanks.
I'll pass your comment to the staff.
See ya.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
ChClose(4,0,30);
MsgDisp("主人公","Be sure not to lose it again!");
VoicePlay("E010410100_04_060");
MsgDisp("Nanatsumori","Roger!");
MsgDisp("主人公","(I wonder if he'll be okay......)");
MsgClose();
ScrFadeOut(0,0);
