EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
MsgClose();
ChOpen(2,33,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040206502_02_000");
MsgDisp("Sassa","The firework artists are amazing.
It keeps evolving every year.");
MsgSel("Yeah, it's really fun to watch.","Is it really that different?","Sniffsniff......It even smells different.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040206502_02_010");
    MsgDisp("Sassa","I want to see more like that Saturn
with the rings.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040206502_02_020");
        MsgDisp("Sassa","Eh?
Maybe I'm wrong......");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040206502_02_030");
        MsgDisp("Sassa","Mo, I guess it's a bit weird......
If it's only a small change, you
wouldn't be able to tell at a glance.");
        MsgDisp("主人公","｛颯砂＊＊｝?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040206502_02_040");
        MsgDisp("Sassa","Even if I try and change
various things, it often isn't apparent
in my times and records.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040206502_02_050");
        MsgDisp("Sassa","So I guess I empathize with the
fireworks artist a little.");
        MsgDisp("主人公","I see......");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3,1);
        VoicePlay("B040206502_02_060");
        MsgDisp("Sassa","Sorry for saying something so
weird! It's fine to enjoy it the 
way you see it.");
        MsgDisp("主人公","I wish I could help somehow.");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040206502_02_070");
        MsgDisp("Sassa","You can.");
        MsgDisp("主人公","Eh?");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,0);
        ChCheek(2,10);
        VoicePlay("B040206502_02_080");
        MsgDisp("Sassa","Easy.
I get different results just when you're
there, watching me.");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040206502_02_090");
        MsgDisp("Sassa","I guess it feels like you have
some kind of special powers?");
        MsgDisp("主人公","R-Really?");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040206502_02_100");
        MsgDisp("Sassa","Ahh.
So, just watch me. That's all you need
to do!");
        SEPlay("EV_SE_534",0,1);
        Wait(50,1);
        SEPlay("EV_SE_527",0,1);
        Wait(40,1);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        ChCheek(2,0);
        VoicePlay("B040206502_02_110");
        MsgDisp("Sassa","Oh!
I guess it's almost time for the grand
finale?");
        MsgDisp("主人公","(If I want to help ｛颯砂＊＊｝
I need to support him even more!)");
        SEStop("EV_SE_534",1);
        SEStop("EV_SE_527",1);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040206502_02_120");
    MsgDisp("Sassa","Seriously!
I didn't notice at all.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
