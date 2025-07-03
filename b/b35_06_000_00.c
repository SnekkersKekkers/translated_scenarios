BGDateAfterOpen();
ChLayout(1);
ScrFadeIn(0);
MsgClose();
ChOpen(6,255,0,0,0,-1,-1,0,0);
VoicePlay("B350600000_06_000");
MsgDisp("Himuro","Hey.");
MsgDisp("主人公","Huh,｛氷室＊＊｝.
What's wrong?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B350600000_06_010");
MsgDisp("Himuro","What are you
gonna do after this?");
MsgDisp("主人公","what am I going to do you say...
I'm going home arent I?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B350600000_06_020");
MsgDisp("Himuro","How hasty.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("B350600000_06_030");
MsgDisp("Himuro","Don't you want to spend 
more time together?");
MsgDisp("主人公","Eh.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B350600000_06_040");
MsgDisp("Himuro","Since we're here already, 
let's go somewhere.
...Just the two of us.");
MsgSel("Yeah, sounds good!","I have some things to do...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B350600000_06_050");
    MsgDisp("Himuro","I thought as much.");
    MsgDisp("主人公","My heart is racing a little, 
what about you?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B350600000_06_060");
    MsgDisp("Himuro","Not really.
Then, let's go.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B350600000_06_070");
    MsgDisp("Himuro","It'll probably be troublesome 
if we were found out.");
    MsgClose();
    ScrFadeOut(0);
    break ;
    case 1:
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B350600000_06_080");
    MsgDisp("Himuro","What's that.");
    MsgDisp("主人公","Sorry...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B350600000_06_090");
    MsgDisp("Himuro","If you have things to do, 
it can't be helped.
...Then, I'm going home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    MsgDisp("主人公","(｛氷室＊＊｝ seemed pretty down...
Maybe I messed up...)");
    MsgClose();
    ScrFadeOut(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
