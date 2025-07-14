BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ScrFadeIn(0);
VoicePlay("B040222202_02_000");
MsgDisp("Sassa","Hm? \"Special Exhibition: A Large
Compilation of Historical Documents\"?");
MsgSel("There's even an old debt acknowledgement","I can barely even read the dates","There's even a letter from 400 years ago");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040222202_02_010");
        MsgDisp("Sassa","I wonder if there's anything interesting
in looking at that.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040222202_02_020");
        MsgDisp("Sassa","I didn't know you were interested in that
kind of stuff.
It's difficult for me.");
        MsgDisp("主人公","I wouldn't say I'm interested in it...
｛颯砂＊＊｝, are you bored?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040222202_02_030");
        MsgDisp("Sassa","To be honest, I don't have that much
interest in IOUs But, I find it
interesting that you are.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040222202_02_040");
        MsgDisp("Sassa","Isn't that right?
There's no common ground between you and
debt agreements.");
        MsgDisp("主人公","Hey, I'm not interested in debt
agreements, I'm interested in historical
documents!");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040222202_02_050");
        MsgDisp("Sassa","Sorry sorry, 
historical documents huh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040222202_02_060");
        MsgDisp("Sassa","If we hadn't come here, I wouldn't have
discovered this new side of you. If I
think about it like that, the historical
documents get a narrow pass.");
        MsgDisp("主人公","(Narrow pass...?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040222202_02_070");
    MsgDisp("Sassa","Hmm, as expected.
I can't read any of it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040222202_02_080");
    MsgDisp("Sassa","Yeah.
400 years was pretty long ago.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
