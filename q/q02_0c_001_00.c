BGOpen("sc810",0);
ChLayout(1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(5,254,0,0,4,-1,-1,0,1,0,30);
ChOpen(7,254,5,0,3,-1,-1,0,2,0,30);
VoicePlay("Q020C00100_07_000");
MsgDisp("Mikage","Well then,
Shall we go?");
ChEye(5,2);
ChMouth(5,2);
ChEyeOpenLevel(5,0);
MsgDisp("主人公","Eh!
｛御影＊＊｝ and ｛柊＊＊＊｝?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("Q020C00100_05_000");
MsgDisp("Hiiragi","Mr. Mikage, There could be a chance she's
already reserved her time for somebody
else...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("Q020C00100_07_010");
MsgDisp("Mikage","That's true. That was maybe a bit crude on
my part. Yanosuke, I'll leave it to you.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("Q020C00100_05_010");
MsgDisp("Hiiragi","｛主人公｝. Would you be inclined to spend
today's free time with us?");
MsgSel("Yes, please！","Sorry, it's just……");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("Q020C00100_05_020");
    MsgDisp("Hiiragi","Phew, my job here is done.");
    ChEye(5,4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("Q020C00100_07_020");
    MsgDisp("Mikage","Good job.
I'm sure Inori is also happy.");
    MsgDisp("主人公","Wait,｛氷室＊＊｝?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("Q020C00100_05_030");
    MsgDisp("Hiiragi","Just now, Inori mailed us to
'Make sure to have fun for me too'");
    MsgDisp("主人公","Hehe, I see.");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,9);
    VoicePlay("Q020C00100_05_040");
    MsgDisp("Hiiragi","When Mr. Mikage invited you like that,
I was worried you'd reject going with us.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("Q020C00100_07_030");
    MsgDisp("Mikage","Sorry for that.
Well then, Let's finally go.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    MsgDisp("主人公","(Hehe.
I have the feeling this will become 
a fun free time!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    ChClose(7,0,0);
    break ;
    case 1:
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("Q020C00100_05_050");
    MsgDisp("Hiiragi","Ah, I see.
That's a disappointment.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("Q020C00100_07_040");
    MsgDisp("Mikage","I understand.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("Q020C00100_07_050");
    MsgDisp("Mikage","Sorry, Yanosuke.
It's because I invited in a weird way.
Sorry to you too.");
    ChMouth(5,4);
    ChEyeOpenLevel(5,9);
    MsgDisp("主人公","No......
I'm also sorry.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("Q020C00100_07_060");
    MsgDisp("Mikage","C'mon, why are you apologising.
Look, it's free time, so be free!");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("Q020C00100_05_060");
    MsgDisp("Hiiragi","I hope you can enjoy this period as well.");
    MsgClose();
    SEPlay("EV_SE_856");
    ChClose(5,0,30);
    ChClose(7,0,30);
    MsgDisp("主人公","(They even invited me,
Was I being too harsh......?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
