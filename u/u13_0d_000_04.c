MsgDisp("主人公","｛柊＊＊＊｝, I guess......");
StlEyeOpenLevel(21,-1);
StlMouthOpenLevel(21,-1);
StlNear(0,0,15);
StlEyeOpenLevel(22,-1);
StlMouthOpenLevel(22,-1);
StlCheek(22,0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    StlEye(22,0);
    StlEyeOpenLevel(22,5);
    StlMouth(22,2);
    StlEye(21,1);
    StlMouth(21,0);
    VoicePlay("U130D00004_21_000");
    MsgDisp("Michiru","Because his world is so unique,
I guess it might be difficult for Mari
to keep up with him?");
    StlEye(22,0);
    StlMouth(22,1);
    VoicePlay("U130D00004_22_000");
    MsgDisp("Hikaru","If you want Yanosuke-san to look 
your way, wouldn't it be a good idea to
align his world with reality?");
    MsgDisp("主人公","(I see......I guess we should try to
experience the history of the theater as
well as the present together.)");
    break ;
    case 3:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,0);
    VoicePlay("U130D00004_21_010");
    MsgDisp("Michiru","I think Yanosuke-san is quite
interested in Mari?");
    MsgDisp("主人公","Eh, is that right?");
    StlMouth(22,1);
    StlEyeOpenLevel(21,0,1);
    VoicePlay("U130D00004_21_020");
    MsgDisp("Michiru","But you two are still friends.
He's an adult but he's also innocent,
it might take him time to fall in love.");
    StlEyeOpenLevel(21,5,1);
    StlEye(22,0,0);
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,0);
    VoicePlay("U130D00004_22_010");
    MsgDisp("Hikaru","The Yanosuke-san who only knows
theater is perfect for Mari. Because
Mari is so curious.");
    StlEyeOpenLevel(22,0,1);
    StlMouth(22,2);
    VoicePlay("U130D00004_22_020");
    MsgDisp("Hikaru","He thinks it's normal to shoulder
so much burden. But that isn't right.");
    StlEye(21,0);
    VoicePlay("U130D00004_21_030");
    MsgDisp("Michiru","Mari.
Why don't you try to be honest with him?
I think it would really motivate him. ");
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,1);
    MsgDisp("主人公","(Mmm. It's complicated but, I 
wonder if I should try to have a lot of 
new experiences with ｛柊＊＊＊｝.");
    break ;
    case 4:
    case 5:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,3);
    StlMouth(21,0);
    VoicePlay("U130D00004_21_040");
    MsgDisp("Michiru","Hehe.
Mari looks like she's married lately. ");
    MsgDisp("主人公","Ehh∋");
    StlEye(21,0);
    StlEye(22,2);
    StlMouth(22,0);
    StlCheek(22,7);
    VoicePlay("U130D00004_22_030");
    MsgDisp("Hikaru","I get that～!
I feel like she's perfectly in sync
with Yanosuke-san♪");
    StlEyeOpenLevel(21,5,1);
    VoicePlay("U130D00004_21_050");
    MsgDisp("Michiru","I'm not sure if he realizes that
he's in love.");
    StlEye(22,0);
    StlMouth(22,0);
    StlCheek(22,5);
    VoicePlay("U130D00004_22_040");
    MsgDisp("Hikaru","If it's the chairman, there's 
nothing to worry about. The love show
will become reality soon▼");
    MsgDisp("Hikaru","Do you think we'll get to see
Yanosuke's passionate side soon? Ah～n, 
Hikaru wants to see that performance.～▼");
    StlEye(22,0);
    MsgDisp("主人公","(｛ひかる＊｝... If it's ｛柊＊＊＊｝ 's
real life love story performance, I want
to see it too...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
