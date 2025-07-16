MsgDisp("主人公","｛本多＊＊｝, I think......");
StlEyeOpenLevel(21,#1);
StlMouthOpenLevel(21,#1);
StlNear(0,0,15);
StlEyeOpenLevel(22,#1);
StlMouthOpenLevel(22,#1);
StlCheek(22,0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    StlEye(22,0);
    StlEyeOpenLevel(22,5);
    StlMouth(22,2);
    StlEye(21,2);
    StlMouth(21,0);
    VoicePlay("U130D00002_21_000");
    MsgDisp("Michiru","Honda-kun, huh......
I think love is still quite far off.");
    StlEye(22,0);
    StlMouth(22,1);
    VoicePlay("U130D00002_22_000");
    MsgDisp("Hikaru","Family is more important than love to him.
I guess he thinks of Mari like his sister?");
    MsgDisp("主人公","(S-Sister......
I guess it would be good if I was more
aggressive with ｛本多＊＊｝? )");
    break ;
    case 3:
    StlEye(22,0);
    StlMouth(22,1);
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,0);
    VoicePlay("U130D00002_21_010");
    MsgDisp("Michiru","Lately, you guys have been on good terms.");
    StlEyeOpenLevel(22,5,1);
    VoicePlay("U130D00002_22_010");
    MsgDisp("Hikaru","Honda-kun seems to have fun with Mari!
Love might still be a long way off,
though?");
    MsgDisp("主人公","Oh, I see......");
    StlEye(21,0);
    VoicePlay("U130D00002_21_020");
    MsgDisp("Michiru","But if Mari works on their relationship
little by little, maybe he will develop
new feelings?");
    StlEye(22,0);
    StlMouth(22,0);
    VoicePlay("U130D00002_22_020");
    MsgDisp("Hikaru","Teach Dahon about love.
Okay, Mari?");
    MsgDisp("主人公","Y-Yeah.");
    MsgDisp("主人公","(Teach ｛本多＊＊｝ about love.
I wonder if I can do it......)");
    break ;
    case 4:
    case 5:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,2);
    StlMouth(21,0);
    StlNear(1,0,15);
    VoicePlay("U130D00002_21_030");
    MsgDisp("Michiru","Hehe.
The relationship you two have feels
special.");
    StlMouth(22,1);
    StlCheek(22,5);
    VoicePlay("U130D00002_22_030");
    MsgDisp("Hikaru","Dahon has been smiling a lot lately when
he thinks of Mari.
It's a bittersweet feeling for him.");
    MsgDisp("主人公","Ah, is that so?");
    StlEye(21,0);
    StlMouth(21,0);
    StlNear(0,0,15);
    VoicePlay("U130D00002_21_040");
    MsgDisp("Michiru","He's realizing his new feelings for Mari.");
    StlEye(22,2);
    StlMouth(22,0);
    VoicePlay("U130D00002_22_040");
    MsgDisp("Hikaru","Dahon is learning about love ▼");
    StlEye(22,0);
    StlMouth(22,0);
    StlCheek(22,0);
    VoicePlay("U130D00002_22_050");
    MsgDisp("Hikaru","He's still a beginner in love so make sure
to teach him properly.♪");
    MsgDisp("主人公","(｛本多＊＊｝ is also in love, huh?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
