BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040211102_02_000");
MsgDisp("Sassa","Isn't it cold?");
MsgSel("No, it's almost warm!","My hands are a bit cold...","Warm me up▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040211102_02_010");
    MsgDisp("Sassa","Alright,
we're getting some exercise in!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2);
    ChCheek(2,10);
    VoicePlay("B040211102_02_020");
    MsgDisp("Sassa","Then, hold my hand.
That would be most effective.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040211102_02_030");
        MsgDisp("Sassa","...How would I do that?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040211102_02_040");
        MsgDisp("Sassa","Fine.");
        MsgDisp("主人公","Umm...");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040211102_02_050");
        MsgDisp("Sassa","Here, put your hand in my pocket.");
        MsgDisp("主人公","Eh?");
        MsgClose();
        SEPlay("EV_SE_504");
        ChClose(2,0,30);
        ChLayout(0);
        MsgClose();
        ChOpen(2,253,4,0,4,-1,-1,10,0);
        SEPlay("EV_SE_565");
        SEWait();
        MsgDisp("主人公","Waa, it's so warm. ");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040211102_02_060");
        MsgDisp("Sassa","Right, it's like a hot drink.
If you drink it, you'll have breathe a 
\"Hooo--to\" sigh of relief. ");
        MsgDisp("主人公","Yeah.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040211102_02_070");
        MsgDisp("Sassa","Huh...
I thought that was funny though...");
        MsgDisp("主人公","(｛颯砂＊＊｝...?
Was that a pun?)");
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
