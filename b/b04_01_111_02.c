BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040111102_01_000");
MsgDisp("Kazama","Somehow, winter sports
always get me pumped up.");
MsgSel("Yeah, me too.","Between skiing and skating, which is your favorite?","I'm glad you're good at it, ｛風真＊＊｝.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040111102_01_010");
    MsgDisp("Kazama","Right?
Despite the cold, I'm all heated up.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040111102_01_020");
    MsgDisp("Kazama","Definitely skating.
Skiing is too much trouble
having to use the ski pole.");
    MsgDispSksp(1,8);
    ChEyeOpenLevel(1,-1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040111102_01_030");
        MsgDisp("Kazama","You don't get it at all.
If you were so good you could glide
doing both, isn't that boring?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,0,1);
        VoicePlay("B040111102_01_040");
        MsgDisp("Kazama","Oh, this is my bad.
I'm sorry.");
        MsgDisp("主人公","What's wrong?");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040111102_01_050");
        MsgDisp("Kazama","No, I just didn't teach
you properly.");
        MsgDisp("主人公","Huh?");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,4);
        ChCheek(1,7);
        VoicePlay("B040111102_01_060");
        MsgDisp("Kazama","It's sort of a cliche,
but when you're wobbly on the ice,
holding hands makes it easier.");
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        Wait(12,0);
        ChEye(1,4);
        ChMouth(1,1);
        ChCheek(1,0);
        VoicePlay("B040111102_01_070");
        MsgDisp("Kazama","If you really want to get better,
I'll make sure I teach you the right way.");
        MsgDisp("主人公","Even if I do get better,
I think it's okay to just
hold hands and glide across.");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040111102_01_080");
        MsgDisp("Kazama","That may be true, but still...
Then I feel like I'm being relied on...");
        MsgDisp("主人公","｛風真＊＊｝?");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040111102_01_090");
        MsgDisp("Kazama","ＯＫ!　I'm prepared now.
Here, give me your hand.");
        SEPlay("EV_SE_760");
        SEWait();
        MsgDisp("主人公","(Huh?
Feels like something's different now...)");
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
