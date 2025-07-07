MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040512102_05_000");
MsgDisp("Hiiragi","Art gallery?
There's an area where 
they sell paintings.");
MsgSel("There might be some future masters","There's also a caricature artist?","The price isn't written?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040512102_05_010");
    MsgDisp("Hiiragi","That's right.
Let's go and take a look.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChMouth(5,2);
        ChMotion(5,0);
        VoicePlay("B040512102_05_020");
        MsgDisp("Hiiragi","Did that tempt you?
But I think it's a pity you have 
to be still for a long time.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040512102_05_030");
        MsgDisp("Hiiragi","Are you interested?");
        MsgDisp("主人公","｛柊＊＊＊｝, Do you not like it that much?");
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040512102_05_040");
        MsgDisp("Hiiragi","Yes... well, in elementary school I was
drawn in an amusing, exaggerated manner. I
also somehow looked like a fox.");
        MsgDisp("主人公","Fox...");
        ChEye(5,0);
        ChMouth(5,2);
        VoicePlay("B040512102_05_050");
        MsgDisp("Hiiragi","Hm?
Just now you made a face that 
looked as if you got it?");
        MsgDisp("主人公","Umm... I'm sorry.");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040512102_05_060");
        MsgDisp("Hiiragi","Hey, you're too honest.");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040512102_05_070");
        MsgDisp("Hiiragi","It's nothing now but at that time it was
such a shock that I tried to pull my eyes
so that they would be more droopy.");
        MsgDisp("主人公","Hehe, that's kind of cute?");
        ChEye(5,2);
        ChMotion(5,0);
        VoicePlay("B040512102_05_080");
        MsgDisp("Hiiragi","Hey, I was desperate at that time.");
        ChEye(5,3);
        VoicePlay("B040512102_05_090");
        MsgDisp("Hiiragi","Well, it's a thing of the past.
Shall we do it? 
The caricature portrait.");
        MsgDisp("主人公","Is that okay?");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("B040512102_05_100");
        MsgDisp("Hiiragi","If I'm with you, 
anything is bound to be enjoyable.
Let's go.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(5);
        SEWait();
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(5,255,0,0,0,-1,-1,0,0,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,4);
    ChMouth(5,0);
    ChMotion(5,2);
    VoicePlay("B040512102_05_110");
    MsgDisp("Hiiragi","Yeah.
There's nothing scarier than a piece 
of work with no price tag.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
