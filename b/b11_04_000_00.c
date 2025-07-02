BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Looks like ｛七ツ森＊｝,
hasn't arrived yet...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("B110400000_33_000");
MsgDisp("?Boy","Are you heading to the other world?");
MsgDisp("主人公","Eh?");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(33,254,0,1,0,-1,-1,0,0);
VoicePlay("B110400000_33_010");
MsgDisp("Guy","Ooh, cute...");
MsgDisp("主人公","Um, I'm meeting with someone here...!");
ChEye(33,0);
ChMouth(33,0);
VoicePlay("B110400000_33_020");
MsgDisp("Guy","Me too.");
ChPosition(33,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
BGMPlay("BGM_C04_NANA_A",0.01);
MsgClose();
ChNanaType(-1);
ChOpen(4,253,0,1,0,-1,-1,0,1);
VoicePlay("B110400000_04_000");
MsgDisp("Nanatsumori","Who are you?");
ChEye(33,2);
ChMouth(33,2);
VoicePlay("B110400000_33_030");
MsgDisp("Guy","Heh?");
MsgDisp("主人公","｛七ツ森＊｝!");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("B110400000_04_010");
MsgDisp("Nanatsumori","Sorry I'm late.
Who's this guy?");
MsgDisp("主人公","Not someone I know.");
MsgDispSksp(1,5);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B110400000_04_020");
MsgDisp("Nanatsumori","I see, I see. That's good?
You should definitely never 
go with a stranger.");
MsgDispSksp(0);
ChEye(33,0);
ChMouth(33,1);
VoicePlay("B110400000_33_050");
MsgDisp("Guy","Aren't you curious about a
world no one knows about?");
MsgDispSksp(1,5);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("B110400000_04_030");
MsgDisp("Nanatsumori","Ah right.
You have no business with 
her anymore.");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,1);
VoicePlay("B110400000_33_060");
MsgDisp("Guy","Ha?");
MsgDispSksp(1,5);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("B110400000_04_040");
MsgDisp("Nanatsumori","Because we're on a date now.
Farewell～");
MsgDispSksp(0);
ChEye(33,2);
ChMouth(33,1);
VoicePlay("B110400000_33_070");
MsgDisp("Guy","They're not interested huh,
no one is listening...");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(33,0,30);
ChPosition(4,0);
MsgDisp("主人公","｛七ツ森＊｝, thank you...");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B110400000_04_050");
MsgDisp("Nanatsumori","I'm very sorry.
It was my fault for being late.
I let such a cheap-looking 
guy mess with you...");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("B110400000_04_060");
MsgDisp("Nanatsumori","I'm truly sorry.
Then, let's start with our date.");
