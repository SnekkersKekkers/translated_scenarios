BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Huh?
｛氷室＊＊｝ hasn't come yet...");
VoicePlay("B110600000_33_000");
MsgDisp("Guy","Hey, do you want to know?
Or do you not want to know?");
MsgDisp("主人公","Eh?");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(33,254,0,0,0,#1,#1,0,0);
VoicePlay("B110600000_33_010");
MsgDisp("Guy","You probably want to try knocking on the
door too, don't you?
I know, it's alright now.");
MsgDisp("主人公","Ummm...?");
VoicePlay("B110600000_06_000");
MsgDisp("Himuro?","Ignore him.");
ChEye(33,0);
ChMouth(33,0);
ChPosition(33,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
Wait(20,0);
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,253,0,0,0,#1,#1,0,1,0,30);
MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B110600000_06_010");
MsgDisp("Himuro","Come on, let's go.");
ChEye(33,1);
ChMouth(33,1);
VoicePlay("B110600000_33_020");
MsgDisp("Guy","Hey, hey∋
This girl is about to take a step with me
into the new world——");
MsgDispSksp(1,5);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B110600000_06_020");
MsgDisp("Himuro","If you take even a single step more, I'll
call the police.");
MsgDispSksp(0);
ChEye(33,2);
ChMouth(33,2);
VoicePlay("B110600000_33_030");
MsgDisp("Guy","Hieee∋");
MsgDispSksp(1,5);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B110600000_06_030");
MsgDisp("Himuro","Spouting meaningless nonsense to confuse
someone and make them anxious is
harassment.");
MsgDispSksp(0);
MsgDispSksp(1,5);
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B110600000_06_040");
MsgDisp("Himuro","Stalking and blocking someone's path is a
clear criminal offense.");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,1);
VoicePlay("B110600000_33_040");
MsgDisp("Guy","W-Why!
I was just trying to open the door for
this girl——");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0.5);
MsgClose();
ChClose(6);
ChPosition(33,0);
VoicePlay("B110600000_06_050");
MsgDisp("Himuro","... Hello.
Is this the police?");
ChEye(33,2);
ChMouth(33,2);
VoicePlay("B110600000_33_050");
MsgDisp("Guy","Ah I see.
The door won't open today.
I'm going home now!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ChPosition(33,2);
ChClose(33,0,30);
Wait(60);
MsgClose();
ChOpen(6,253,2,2,0,0,#1,0,0);
VoicePlay("B110600000_06_060");
MsgDisp("Himuro","Haa... if he's running away, he must know
he's being a nuisance.");
MsgDisp("主人公","｛氷室＊＊｝, thank you.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B110600000_06_070");
MsgDisp("Himuro","No...
It was my fault for being late in the
first place.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B110600000_06_080");
MsgDisp("Himuro","Let's go already. before we get caught up
in something weird again.");
