BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,3);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040303302_03_000");
MsgDisp("Honda","Seriously, no matter how many times I look
at the deep-sea corner, I never run out of
new discoveries!");
MsgSel("Huh? Even for you ｛本多＊＊｝?","Even though it's too dark to see anything clearly?","｛本多＊＊｝, you really like the deep-sea corner.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040303302_03_010");
    MsgDisp("Honda","Why not∋
I'm surrounded by so much around me that I
don't know about!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,0,1);
        VoicePlay("B040303302_03_020");
        MsgDisp("Honda","No no, learn from the deep-sea fish!
If you don't try to look, you won't see
anything.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040303302_03_030");
        MsgDisp("Honda","Did I get the wrong idea?
I thought you were having fun.");
        MsgDisp("主人公","Ah, sorry.
I said something strange...");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,5);
        VoicePlay("B040303302_03_040");
        MsgDisp("Honda","Wait, I have a good idea!");
        MsgDisp("主人公","Yeah?");
        ChEye(3,1);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040303302_03_050");
        MsgDisp("Honda","If you can't see, why not try closing your
eyes?");
        MsgDisp("主人公","Huh?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040303302_03_060");
        MsgDisp("Honda","Come on, quick quick!
Close your eyes!");
        MsgClose();
        ScrFadeOut(3,30);
        Wait(40,1);
        MsgDisp("主人公","Uh, okay.");
        VoicePlay("B040303302_03_070");
        MsgDisp("Honda","...Amazing!
The deep-sea corner∋ ...another
discovery∈");
        MsgDisp("主人公","(I wonder what ｛本多＊＊｝
discovered?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040303302_03_080");
    MsgDisp("Honda","That's right, this corner is especially
interesting. I wonder if just saying that
I \"like\" it is strong enough?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
