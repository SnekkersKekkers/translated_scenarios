BGOpen("tr510",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040224102_02_000");
MsgDisp("Sassa","It seems there's a souvenir shop attached.");
MsgSel("How about some freshly squeezed milk?","How about some homemade sausages?","Looks like you can ride ponies.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("B040224102_02_010");
    MsgDisp("Sassa","As an athlete, I know dairy products are
vital, but I'm not good with them.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040224102_02_020");
    MsgDisp("Sassa","Yeah, the person who thought of making
sausages is quite amazing");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,2);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040224102_02_030");
        MsgDisp("Sassa","You're fine with it, but I can't do it.
I feel bad for the ponies.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040224102_02_040");
        MsgDisp("Sassa","Yeah, yeah.");
        MsgDisp("主人公","｛颯砂＊＊｝, what's wrong?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040224102_02_050");
        MsgDisp("Sassa","Eh?
Ah, I'm just imagining you riding on a
pony.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040224102_02_060");
        MsgDisp("Sassa","It's quite a cute image.");
        MsgDisp("主人公","Ehh?
What were you imagining?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040224102_02_070");
        MsgDisp("Sassa","You riding on a slightly dirty white pony
that's plodding along.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,4);
        VoicePlay("B040224102_02_080");
        MsgDisp("Sassa","It would be too cute if I saw that for
real.");
        MsgClose();
        SEPlay("EV_SE_765");
        ChClose(2);
        SEWait();
        VoicePlay("B040224102_02_090");
        MsgDisp("Sassa","They're here, they're here, this way!
Lots of slightly dirty ponies!");
        MsgDisp("主人公","(Umm...
Is it okay to be happy about how cute
｛颯砂＊＊｝ is...?)");
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
