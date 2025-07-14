MsgClose();
BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O030700000_07_000");
    MsgDisp("Mikage","Hmhm.
We synced pretty well.");
    MsgDisp("主人公","(We did it, first place!)");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O030700000_07_010");
    MsgDisp("Mikage","We did it!");
    MsgDisp("主人公","Yes!");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("O030700000_07_020");
    MsgDisp("Mikage","Oh no, the stares from the other staff
hurt......");
    MsgDisp("主人公","(We did it, first place!)");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O030700000_07_030");
    MsgDisp("Mikage","We did it!
We got first!");
    MsgDisp("主人公","Yes, I'm so happy!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("O030700000_07_040");
    MsgDisp("Mikage","Compared to just running normally, maybe
we were a little faster together?");
    MsgDisp("主人公","Hehe!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("O030700000_07_050");
    MsgDisp("Mikage","Thanks to you, I had fun at this sports
festival. Thanks.");
    MsgDisp("主人公","(We did it!
An uncontested victory!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
