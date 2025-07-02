BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,3,2,1,0,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723102_07_000");
MsgDisp("Mikage","Closing my eyes didn't help.
Hey, there's nothing left.");
MsgSel("Let's relax and cheer \"Banzai!\"","Hey, let's stop riding already.","Let's hold hands.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    ChEyeOpenLevel(7,7);
    VoicePlay("B040723102_07_010");
    MsgDisp("Mikage","Even if I surrender, this thing
isn't gonna go easy on me.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    ChEyeOpenLevel(7,7);
    VoicePlay("B040723102_07_020");
    MsgDisp("Mikage","Don't get me wrong.
My philosophy is to go down fighting; 
no forfeits.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(7,0);
        ChMouth(7,1);
        ChMotion(7,5);
        VoicePlay("B040723102_07_030");
        MsgDisp("Mikage","No?
Hey, what are you saying?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,0);
        ChMouth(7,1);
        ChMotion(7,5);
        VoicePlay("B040723102_07_040");
        MsgDisp("Mikage","Umm?
....");
        MsgDisp("主人公","What's wrong?");
        ChEye(7,1);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040723102_07_050");
        MsgDisp("Mikage","Hey, what are you saying.
Phew, that was dangerous.");
        MsgDisp("主人公","Umm...
It's not that dangerous of a ride though.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,2);
        ChEyeOpenLevel(7,7);
        VoicePlay("B040723102_07_060");
        MsgDisp("Mikage","The one who's dangerous is you.");
        MsgDisp("主人公","Eh?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,4);
        ChEyeOpenLevel(7,10);
        VoicePlay("B040723102_07_070");
        MsgDisp("Mikage","that's right, what if this thing moved
super fast, but was in a low place? Maybe
even underground?");
        MsgDisp("主人公","An underground rollercoaster?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,3);
        VoicePlay("B040723102_07_080");
        MsgDisp("Mikage","Running freely in all directions
whilst avoiding plant roots.");
        MsgDisp("主人公","Hehe, like a mole.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,2);
        ChEyeOpenLevel(7,7);
        VoicePlay("B040723102_07_090");
        MsgDisp("Mikage","If we overdo it, the crops won't 
be able to grow though?");
        MsgDisp("主人公","(Hehe, looks like ｛御影＊＊｝
really odes not like high places)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
