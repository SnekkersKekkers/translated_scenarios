BGOpen("wf210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040202102_02_000");
MsgDisp("Sassa","No two bricks here are the same.");
MsgSel("Wouldn't being the same make them prettier...","Was changing them intentional?","Are they handmade by a craftsman?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4,1);
        VoicePlay("B040202102_02_010");
        MsgDisp("Sassa","Really?
I think it's nice that they're handmade.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040202102_02_020");
        MsgDisp("Sassa","I guess. The look of being perfectly
aligned and the look of everything
clashing, both are good.");
        MsgDisp("主人公","Yeah, that's true.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040202102_02_030");
        MsgDisp("Sassa","Even so, if you look closely, every single
one of them is different.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040202102_02_040");
        MsgDisp("Sassa","Even though they differ in color and
shape, they are spread out evenly and
create a sense of unity.");
        MsgDisp("主人公","That big brick looks kind of like
｛颯砂＊＊｝.");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040202102_02_050");
        MsgDisp("Sassa","Haha, it's kind of dark and rough looking.");
        ChEye(2,3);
        ChMouth(2,4);
        ChMotion(2,4);
        ChEyeOpenLevel(2,#1);
        ChCheek(2,10);
        VoicePlay("B040202102_02_060");
        MsgDisp("Sassa","The round one next to it is you then...");
        MsgDisp("主人公","The Round one?");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040202102_02_070");
        MsgDisp("Sassa","Try not to step on bricks like those.
Come, let's go.");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChCheek(2,0);
        VoicePlay("B040202102_02_080");
        MsgDisp("Sassa","Ah, that brick there looks like Vice
Principal Himuro, doesn't it?");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,4);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040202102_02_090");
        MsgDisp("Sassa","And that one, with the weird haircut.
It's Mikage-sensei!");
        MsgDisp("主人公","(Hehe, ｛颯砂＊＊｝ looks like
he's enjoying himself.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040202102_02_100");
    MsgDisp("Sassa","That's because they're handmade, huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040202102_02_110");
    MsgDisp("Sassa","Seems so.
They're fun to look at, aren't they?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
