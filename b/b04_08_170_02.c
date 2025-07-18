BGOpen("ne340",0);
ChLayout(1);
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040817002_08_000");
MsgDisp("Shirahane","I like the atmosphere of karaoke but...");
MsgSel("Do you dislike singing?","Then, enjoy the atmosphere!","Let's keep singing!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("B040817002_08_010");
    MsgDisp("Shirahane","I don't hate it, I don't like it.
...Ah, is it all the same?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040817002_08_020");
    MsgDisp("Shirahane","That's right. I'm awfully grateful for yer
consideration. Seriously, thanks a bunch.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(8,2);
        ChMouth(8,2);
        ChMotion(8,4,1);
        VoicePlay("B040817002_08_030");
        MsgDisp("Shirahane","Please bear with my singing...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,4,1);
        VoicePlay("B040817002_08_040");
        MsgDisp("Shirahane","I can't...sing.");
        MsgDisp("主人公","Why?");
        ChEye(8,4);
        ChMouth(8,4);
        ChMotion(8,2,1);
        VoicePlay("B040817002_08_050");
        MsgDisp("Shirahane","Why...yeah.
I don't even know why myself, but I've
never been good at singing.");
        MsgDisp("主人公","Could it be...that you're tone deaf?");
        ChEye(8,2);
        ChMouth(8,0);
        ChMotion(8,0,1);
        VoicePlay("B040817002_08_060");
        MsgDisp("Shirahane","I'm not tone deaf?
...I'm not good either though.");
        ChEye(8,4);
        ChMouth(8,4);
        ChMotion(8,4,1);
        VoicePlay("B040817002_08_070");
        MsgDisp("Shirahane","I wonder why...
I don't mind standin' out but I'm not
willin' to sing in front of others.");
        MsgDisp("主人公","Then, just pretend I'm not here.");
        ChEye(8,0);
        ChMouth(8,4);
        ChMotion(8,0,1);
        ChEyeOpenLevel(8,10);
        VoicePlay("B040817002_08_080");
        MsgDisp("Shirahane","There's no way I can do that∋");
        MsgDisp("主人公","!");
        ChEye(8,4);
        ChMouth(8,0);
        ChMotion(8,4,1);
        ChCheek(8,8);
        VoicePlay("B040817002_08_090");
        MsgDisp("Shirahane","I don't want to pretend that you're not
here.
I absolutely can't do that...");
        MsgDisp("主人公","(｛大地＊＊｝....)");
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
