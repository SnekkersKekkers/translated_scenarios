BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040621302_06_000");
MsgDisp("Himuro","I wonder what cats and dogs think about in
life.");
MsgSel("Maybe mealtimes?","Are you interested?","They don't look like they're thinking anything.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040621302_06_010");
    MsgDisp("Himuro","Well that seems about right.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040621302_06_020");
    MsgDisp("Himuro","I was just curious... but.
That made me curious about how intelligent
they are.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040621302_06_030");
        MsgDisp("Himuro","That's an opinion that demonstrates the
arrogance of humans.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040621302_06_040");
        MsgDisp("Himuro","Well they don't seem to be thinking about
anything big.");
        ChEye(6,2);
        ChMouth(6,4);
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040621302_06_050");
        MsgDisp("Himuro","I'm jealous.");
        MsgDisp("主人公","You want to be a cat or a dog?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040621302_06_060");
        MsgDisp("Himuro","That's a meaningless question.
You can't become one.");
        MsgDisp("主人公","Ugh...");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040621302_06_070");
        MsgDisp("Himuro","But if I had to answer, I don't think I'd
want to become one.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040621302_06_080");
        MsgDisp("Himuro","There are less things you can do as an
animal.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040621302_06_090");
        MsgDisp("Himuro","If I were a cat or dog I wouldn't want to
see you on a date here with someone else.");
        MsgDisp("主人公","Eh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040621302_06_100");
        MsgDisp("Himuro","I would rather be the one watching the
fluffy lump.");
        ChEye(6,3);
        ChMouth(6,4);
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        ChCheek(6,0);
        VoicePlay("B040621302_06_110");
        MsgDisp("Himuro","You look happy next to me, and I'm content
with our current circumstances.");
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
