BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,-1,-1,0,1);
ChOpen(22,254,0,0,0,-1,-1,0,2);
MsgDisp("主人公","Ah,｛みちる＊｝,｛ひかる＊｝!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F100430002_21_000");
MsgDisp("Michiru","Mari.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,3,1);
VoicePlay("F100430002_22_000");
MsgDisp("Hikaru","It's Mari, huh.
Hey, hey...");
MsgDisp("主人公","Hm?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("F100430002_22_010");
MsgDisp("Hikaru","How much do you know
about Minoru-kun?");
MsgDisp("主人公","Ehh∋");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F100430002_21_010");
MsgDisp("Michiru","Hikaru, that's a strange way 
of asking the question.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F100430002_22_020");
MsgDisp("Hikaru","Ehe▼
It's definitely weird, right?
Umm...");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100430002_21_020");
MsgDisp("Michiru","Minoru-kun is coming!");
ChEye(22,2);
ChMouth(22,3);
ChMotion(22,1,1);
VoicePlay("F100430002_22_030");
MsgDisp("Hikaru","Aaah, hey!
Mari, he's going to attack agaim!
Salut!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
ChClose(21,0,30);
ChClose(22,0,30);
SEWait();
Wait(30);
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChNanaType(0);
ChOpen(4,254,0,2,1,-1,-1,0,0,0,60);
ChMotion(4,1,1);
VoicePlay("F100430002_04_000");
MsgDisp("Nanatsumori","Haa, haa...");
MsgDisp("主人公","｛七ツ森＊｝, what's wrong∋");
ChMotion(4,0,1);
VoicePlay("F100430002_04_010");
MsgDisp("Nanatsumori","Those twins...
Did they say something... weird?");
MsgDisp("主人公","They didn't say anything weird.
They asked me how much I knew about
｛七ツ森＊｝.");
ChEye(4,2);
ChMouth(4,2);
VoicePlay("F100430002_04_020");
MsgDisp("Nanatsumori","That's a coarse way of saying it...");
MsgDisp("主人公","｛みちる＊｝ said the same thing...");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("F100430002_04_030");
MsgDisp("Nanatsumori","So Hikaru is the ringleader, then?");
MsgDisp("主人公","Hey.
｛七ツ森＊｝ is there something else
you're hiding from me?");
ChEye(4,2);
ChMouth(4,5);
ChMotion(4,0,1);
VoicePlay("F100430002_04_040");
MsgDisp("Nanatsumori","Ha?
Not yet... No!
Don't look at me like that.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4,0,30);
MsgDisp("主人公","(He ran away...
He's definitely still 
hiding something...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
