EfctClose();
BGOpen("fp200",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
ChEye(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("B040108302_01_000");
MsgDisp("Kazama","......
Let's try and keep quiet for a second.");
MsgSel("... Hey, hey, did you hear that?","Isn't that rumor at night?","THIS. IS. MY. INNER. VOICE. BEEP.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040108302_01_010");
    MsgDisp("Kazama","Seriously,
you couldn't have just waited
a second longer?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,0);
    ChMotion(1,4);
    VoicePlay("B040108302_01_020");
    MsgDisp("Kazama","Well, yeah, but I was just checking.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108302_01_030");
        MsgDisp("Kazama","You should study up more about
the mood of the atmosphere, seriously.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,3);
        ChMouth(1,1);
        ChMotion(1,3);
        VoicePlay("B040108302_01_040");
        MsgDisp("Kazama","No way, I just heard your inner voice.");
        MsgDisp("主人公","Hehe, what did it say?");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108302_01_050");
        MsgDisp("Kazama","It just made a self introduction.
You're a really dummy, you know?");
        MsgDisp("主人公","Aww...");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040108302_01_060");
        MsgDisp("Kazama","It's okay, inner voice.
By all means, please continue.");
        MsgDisp("主人公","Hey, I'm not doing it again.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040108302_01_070");
        MsgDisp("Kazama","My bad. But if I really could
hear your inner voice, I'm sure we could
have a normal conversation.");
        MsgDisp("主人公","And what about your inner voice?");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040108302_01_080");
        MsgDisp("Kazama","Wait a second. Thought I heard something
weird just now...");
        ChEye(1,4);
        ChMouth(1,4);
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        ChCheek(1,5);
        VoicePlay("B040108302_01_090");
        MsgDisp("Kazama","......
THIS. IS. HIS. INNER. VOICE. BEEP.");
        MsgDisp("主人公","Hehe, your inner voice did a self
introduction too?");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,0);
        VoicePlay("B040108302_01_100");
        MsgDisp("Kazama","It's our very first meeting.
We both must really be serious types,
huh?");
        MsgDisp("主人公","(｛風真＊＊｝'s inner voice...
I want to hear it, but maybe I don't.)");
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
