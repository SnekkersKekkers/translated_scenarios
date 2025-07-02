BGOpen("sc720",0);
BGMPlay("BGM_PLACE_SHOP");
Wait(40,0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for waiting. Here is your
matcha and mitarashi dango.");
    MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
    MsgClose();
    ChOpen(5,254,0,4,4,-1,-1,0,0);
    VoicePlay("P030500000_05_000");
    MsgDisp("Hiiragi","Please excuse me.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Welcome!");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P030500000_05_010");
    MsgDisp("Hiiragi","It seems to be quite busy here.
Shall I come back another time?");
    MsgDisp("主人公","No.
Please, would you like to come in?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P030500000_05_020");
    MsgDisp("Hiiragi","Then, allow me to be spoiled by your
words. Although I must say......");
    MsgDisp("主人公","Hm?");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    Wait(20,1);
    VoicePlay("P030500000_05_030");
    MsgDisp("Hiiragi","That yukata suits you quite well.");
    MsgDisp("主人公","Hehe, thanks!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for waiting. Here is your
matcha and mitarashi dango.");
    MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
    MsgClose();
    ChOpen(5,254,4,3,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P030500000_05_040");
    MsgDisp("Hiiragi","｛主人公｝,
quite successful, aren't we?");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
Welcome.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P030500000_05_050");
    MsgDisp("Hiiragi","I suppose this must be thanks to your
pleasant customer service skills.");
    MsgDisp("主人公","Hehe, maybe?");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P030500000_05_060");
    MsgDisp("Hiiragi","Haha.
Then, I'll be looking forward to a fun
tea time with you as well.");
    MsgDisp("主人公","Yes, of course.
I'll have them ready a table for one.");
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("P030500000_05_070");
    MsgDisp("Hiiragi","Hm?
Will you not be serving me?");
    MsgDisp("主人公","We're on rotation here, you know?");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P030500000_05_080");
    MsgDisp("Hiiragi","I see......
Then, I'll be enjoying my dango inside
until you come to serve me.");
    MsgDisp("主人公","Yes, please savor them.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(5,0);
