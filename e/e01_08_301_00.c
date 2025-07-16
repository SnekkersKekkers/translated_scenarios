BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Huh?
That person over there is......)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(8,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","｛大地＊＊｝!");
ChEye(8,3);
ChMotion(8,3,1);
VoiceEVSPlay(8);
VoicePlay("E010830100_08_000");
MsgDisp("Daichi","｛主人公｝.
What a coincidence!");
MsgDisp("主人公","Yeah.
Are you meeting with someone?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("E010830100_08_010");
MsgDisp("Daichi","That's right.
I'm waiting for big bro.");
MsgDisp("主人公","I see.
It's nice seeing you out together.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChPosition(8,1);
ChOpen(9,35,0,4,4,#1,#1,0,2);
VoicePlay("E010830100_09_000");
MsgDisp("Kuya","Dai-chan, sorry to keep you waiting.
You are......");
MsgDisp("主人公","Hello, Kuya-san I happened to pass by and
spotted ｛大地＊＊｝.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,6);
VoicePlay("E010830100_09_010");
MsgDisp("Kuya","I see.");
ChEye(8,3);
ChMouth(8,4);
ChMotion(8,4,1);
ChEyeOpenLevel(8,10);
VoicePlay("E010830100_08_020");
MsgDisp("Daichi","Did everything go well, big bro?");
ChEyeOpenLevel(8,#1);
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,0);
VoicePlay("E010830100_09_020");
MsgDisp("Kuya","Yeah.
I delivered it safely.");
ChMouth(8,3);
ChMotion(8,0,1);
ChEyeOpenLevel(8,0);
MsgDisp("主人公","Eh......
Kuya-san did you perhaps......");
ChEyeOpenLevel(8,#1);
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("E010830100_09_030");
MsgDisp("Kuya","Yeah, when I got separated from Dai-chan,
I came across a lost child.");
ChMotion(9,0,1);
VoicePlay("E010830100_09_040");
MsgDisp("Kuya","He was worried about being late for an
exam since he didn't know where the bus
stop was.");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,4,1);
VoicePlay("E010830100_08_030");
MsgDisp("Daichi","Big bro really gets involved in things
often.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,0);
VoicePlay("E010830100_09_050");
MsgDisp("Kuya","That's true.
But it's my special skill");
MsgDisp("主人公","(skill......?)");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("E010830100_08_040");
MsgDisp("Daichi","When I go out with big bro, the day
doesn't end without something happening.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("E010830100_09_060");
MsgDisp("Kuya","Haha, sorry.
Would you like a parfait to make up for
keeping you waiting?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,1,1);
VoicePlay("E010830100_08_050");
MsgDisp("Daichi","Yeah, I'll eat!
Hey, why don't you come along?");
MsgDisp("主人公","Eh?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,8);
VoicePlay("E010830100_09_070");
MsgDisp("Kuya","Yeah, for sure. As a thank you for keeping
Dai-chan company. What do you think?");
MsgDisp("主人公","Well then, with pleasure!");
ChEyeOpenLevel(9,#1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,1,1);
VoicePlay("E010830100_08_060");
MsgDisp("Daichi","Hooray!");
MsgDisp("主人公","(Is it alright?
I guess they really are close siblings.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
