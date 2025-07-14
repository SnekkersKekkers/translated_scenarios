MsgClose();
ChLayout(1);
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_625");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O040701000_07_000");
    MsgDisp("Mikage","Oh, we're on the same team.");
    MsgDisp("主人公","Huh? You're participating too,
｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("O040701000_07_010");
    MsgDisp("Mikage","To even the teams.
But, if I'm going out, I'm going to win!");
    MsgDisp("主人公","Yes, I'll do my best!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("O040701000_07_020");
    MsgDisp("Mikage","Alright.");
    break ;
    case 3:
    SEPlay("EV_SE_625");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O040701000_07_030");
    MsgDisp("Mikage","Yo.
Let's do our best.");
    MsgDisp("主人公","Hm, you're participating too,
｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("O040701000_07_040");
    MsgDisp("Mikage","Yeah.");
    MsgDisp("主人公","I, I see.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O040701000_07_050");
    MsgDisp("Mikage","Isn't it fine?
I'll be joining you for a bit.");
    MsgDisp("主人公","Hehe, of course.
Let's do our best.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O040701000_07_060");
    MsgDisp("Mikage","Yeah, let's win!");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_625");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoiceEVSPlay(7);
    VoicePlay("O040701000_07_070");
    MsgDisp("Mikage","｛主人公｝, let's win.");
    MsgDisp("主人公","Huh? So you're participating too,
｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("O040701000_07_080");
    MsgDisp("Mikage","I'm just jumping in.");
    MsgDisp("主人公","Do you like the ball toss?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O040701000_07_090");
    MsgDisp("Mikage","Yeah. Everyone looks like they're having
fun. Just watching would be lonely.");
    MsgDisp("主人公","Then let's do our best together.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("O040701000_07_100");
    MsgDisp("Mikage","Yeah!　I'm playing to win, okay?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
