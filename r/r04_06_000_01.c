ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R040600001_06_000");
    MsgDisp("Himuro","You're all dolled up.
That dress.");
    MsgDisp("主人公","Does it suit me?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R040600001_06_010");
    MsgDisp("Himuro","Guess it fits the mood?");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R040600001_06_020");
    MsgDisp("Himuro","In any case...this is a rare sight to see.");
    MsgDisp("主人公","Huh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R040600001_06_030");
    MsgDisp("Himuro","That dress.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("R040600001_06_040");
    MsgDisp("Himuro","It might be a little much but...
Well, it's not bad at all.");
    MsgDisp("主人公","Really?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("R040600001_06_050");
    MsgDisp("Himuro","Won't you take it in stride?
I wouldn't lie about this.");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R040600001_06_060");
    MsgDisp("Himuro","...Beautiful.");
    MsgDisp("主人公","Huh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("R040600001_06_070");
    MsgDisp("Himuro","Well, um...
Your dress.
It's nice.");
    MsgDisp("主人公","Thank you.
You look pretty nice too,
｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChCheek(6,5);
    VoicePlay("R040600001_06_080");
    MsgDisp("Himuro","I don't really care that much.
...But maybe I would care a little if I
stayed next to you.");
    MsgDisp("主人公","Huh, really?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R040600001_06_090");
    MsgDisp("Himuro","I don't want to look like I'm out of your
league.");
    MsgDisp("主人公","(｛氷室＊＊｝...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
