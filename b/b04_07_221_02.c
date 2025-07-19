BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040722102_07_000");
MsgDisp("Mikage","Today we're going to investigate the role
of the castle tower.");
MsgSel("Apparently it's the last place to barricade yourself in.","Isn't it where the lord resides?","It's a viewing platform, isn't it!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040722102_07_010");
    MsgDisp("Mikage","It seems so.
It's not a penthouse.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040722102_07_020");
    MsgDisp("Mikage","Apparently not.
If you look carefully, you'll see it's
quite modest.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040722102_07_030");
        MsgDisp("Mikage","Hahaha.
You really like high places don't you?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040722102_07_040");
        MsgDisp("Mikage","You really like high places, don't you?");
        MsgDisp("主人公","Ah, sorry...
｛御影＊＊｝ isn't great with high
places, right?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040722102_07_050");
        MsgDisp("Mikage","Oii, why are you apologizing?
You like the pretty scenery, right?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,3);
        VoicePlay("B040722102_07_060");
        MsgDisp("Mikage","From now on, you will continue to see
beautiful views, and hone your senses.");
        MsgDisp("主人公","But, it would be even better if I would
see it with ｛御影＊＊｝...");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040722102_07_070");
        MsgDisp("Mikage","It can't be helped～
This is a special service only for today;
I'll take three steps forward.");
        MsgDisp("主人公","Hehe, thank you very much.");
        MsgClose();
        SEPlay("EV_SE_544",0.1,0.6);
        ChClose(7);
        VoicePlay("B040722102_07_080");
        MsgDisp("Mikage","One...two...three.");
        SEPlay("EV_SE_778");
        MsgClose();
        ChLayout(0);
        SEPlay("EV_SE_544");
        ChOpen(7,254,4,0,4,#1,#1,0,0);
        MsgDisp("主人公","Ehh∋
｛御影＊＊｝, you're going the other
way?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,3);
        VoicePlay("B040722102_07_090");
        MsgDisp("Mikage","Three steps is three steps, right?");
        MsgDisp("主人公","(Hehe.
｛御影＊＊｝ doesn't like high places.
It's kind of cute?)");
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
