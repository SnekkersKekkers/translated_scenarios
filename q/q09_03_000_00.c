BGOpen("sc810",0);
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("Q090300000_03_000");
    MsgDisp("Honda","Good morning,
Good day!");
    MsgDisp("主人公","Yeah,
Good morning, ｛本多＊＊｝.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("Q090300000_03_010");
    MsgDisp("Honda","This is our last free period.
Have no regrets——");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("Q090300000_03_020");
    MsgDisp("Honda","Oh, look,
We're wasting time, let's get going!");
    MsgDisp("主人公","S, Sure!");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoiceEVSPlay(3);
    VoicePlay("Q090300000_03_030");
    MsgDisp("Honda","｛主人公｝, Good morning.
I was waiting for you.");
    MsgDisp("主人公","Eh?　｛本多＊＊｝, how early.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("Q090300000_03_040");
    MsgDisp("Honda","I mean, isn't this the last
free period? We need to use time wisely.");
    ChFace(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("Q090300000_03_050");
    MsgDisp("Honda","When you're ready, let's go!");
    MsgDisp("主人公","Hehe, let's go.");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoiceEVSPlay(3);
    VoicePlay("Q090300000_03_060");
    MsgDisp("Honda","｛主人公｝.
Good morning!");
    MsgDisp("主人公","｛本多＊＊｝, how early.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("Q090300000_03_070");
    MsgDisp("Honda","Mhmhm, I was so excited, I couldn't 
sleep at all. Like the day before a 
field trip?");
    MsgDisp("主人公","Hehe, isn't it a school trip?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("Q090300000_03_080");
    MsgDisp("Honda","Huh?
Oh yeah, so it's a field trip?");
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("Q090300000_03_090");
    MsgDisp("Honda","Okay, so are you ready?");
    MsgDisp("主人公","Yeah!
I'm looking forward to our last free 
time.");
    ChSet(3,3);
    VoicePlay("Q090300000_03_100");
    MsgDisp("Honda","I wonder what discoveries can you and I 
make together?
Off we go!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
