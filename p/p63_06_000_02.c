BGMPlay("BGM_PLACE_SHOP");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc724",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my last cultural festival.
We finally tried to make an organic cafe
but...)");
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("P630600002_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Welcome!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("P630600002_06_010");
    MsgDisp("Himuro","You seriously went all out.");
    MsgDisp("主人公","Yeah, using the herbs and vegetables,
we're offering tea and a light meal. I
also did my best to study cooking methods!");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("P630600002_06_020");
    MsgDisp("Himuro","Because it's the culmination of the last
three years.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("P630600002_06_030");
    MsgDisp("Himuro","Then, can I get your number one
reccomendation? I want to see the fruits
of your efforts with my own eyes.");
    MsgDisp("主人公","Yes, one moment please!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(6,#1);
    ChMouth(6,#1);
    ChCheek(6,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc724",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my last cultural festival.
We finally tried to make an organic cafe
but...)");
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(6);
    VoicePlay("P630600002_06_040");
    MsgDisp("Himuro","｛主人公｝.");
    MsgDisp("主人公","｛氷室＊＊｝!
You came?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600002_06_050");
    MsgDisp("Himuro","well, I had free time?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("P630600002_06_060");
    MsgDisp("Himuro","But, well I didn't think it would be this
full-blown of a cafe.");
    MsgDisp("主人公","I tried my best!
The menu is also legit.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600002_06_070");
    MsgDisp("Himuro","...Did you handmake it?");
    MsgDisp("主人公","Of course!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P630600002_06_080");
    MsgDisp("Himuro","Hmmm...it's somewhat complicated.");
    MsgDisp("主人公","Eh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600002_06_090");
    MsgDisp("Himuro","Then, I want the most heartfelt dish
you've made until now, please.");
    MsgDisp("主人公","Y-Yeah?
Then please wait a moment!");
    MsgDisp("主人公","(What's up with ｛氷室＊＊｝? )");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(6,#1);
    ChMouth(6,#1);
    ChCheek(6,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
