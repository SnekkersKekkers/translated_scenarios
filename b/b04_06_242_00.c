BGOpen("tr520",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ScrFadeIn(0);
VoicePlay("B040624200_06_000");
MsgDisp("Himuro","It's nothing but nature huh.");
MsgSel("｛氷室＊＊｝, I'll be counting on you♪","Camping means ＢＢＱ!","This seems like a lot of inconvenience...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040624200_06_010");
    MsgDisp("Himuro","Why don't you build 
up more independence?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040624200_06_020");
    MsgDisp("Himuro","Yeah, not a bad suggestion.
Then, let's prepare the ingredients and
start grilling right away.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040624200_06_030");
    MsgDisp("Himuro","Isn't overcoming inconveniences the true
thrill of camping?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
