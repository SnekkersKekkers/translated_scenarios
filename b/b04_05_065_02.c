EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
MsgClose();
ChOpen(5,33,0,0,4,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,3);
VoicePlay("B040506502_05_000");
MsgDisp("Hiiragi","Every year, I'll think \"This year is the
best\".");
MsgSel("Yeah, the evolution of technology is amazing.","Yeah, the number of fireworks is increasing","Yeah, that'll definitely go for next year too");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,2);
    VoicePlay("B040506502_05_010");
    MsgDisp("Hiiragi","That's right.
I had forgotten there are people
still honing their craft.");
    MsgDispSksp(1,6);
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
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040506502_05_020");
        MsgDisp("Hiiragi","It's not a matter of the numbers.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040506502_05_030");
        MsgDisp("Hiiragi","The number of fireworks is actually
increasing. I hadn't noticed.");
        ChEye(5,0);
        ChMotion(5,0);
        VoicePlay("B040506502_05_040");
        MsgDisp("Hiiragi","But, even if the numbers diminished, I
think I would have the same impressions.");
        MsgDisp("主人公","Eh?");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040506502_05_050");
        MsgDisp("Hiiragi","But that's natural for me.
My relationship with you, as we watch it
together each year becomes stronger.");
        MsgDisp("主人公","I see, that's right. And also your
relationship with the theatre troupe and
peole in the town....");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,2);
        VoicePlay("B040506502_05_060");
        MsgDisp("Hiiragi","Ha...
Once again, I was so dazzled by you I 
couldn't see my surroundings...");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040506502_05_070");
        MsgDisp("Hiiragi","Thank you.
And...
If, from now on too──");
        SEPlay("EV_SE_022",1);
        SEWait();
        MsgDisp("主人公","Eh...");
        ChMouth(5,3);
        ChMotion(5,4);
        VoicePlay("B040506502_05_080");
        MsgDisp("Hiiragi","...I'll continue next time.
Definitely.");
        MsgDisp("主人公","(｛柊＊＊＊｝...
I wonder what you were going to say...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040506502_05_090");
    MsgDisp("Hiiragi","Yes, even if circumstances and
everything and everything change.
If I can be here next year too, 
I'll be truly happy.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
