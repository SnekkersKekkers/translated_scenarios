switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("L040500004_05_000");
    MsgDisp("Hiiragi","This is handmade, correct?");
    MsgDisp("主人公","Yes, I did my best!");
    ChEye(5,4);
    VoicePlay("L040500004_05_010");
    MsgDisp("Hiiragi","Each component is tasteful.
You have quite the skill.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝ seemed happy.
Thank goodness.)");
    break ;
    case 3:
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,3,1);
    VoicePlay("L040500004_05_020");
    MsgDisp("Hiiragi","Indeed, I can see your personality in
this.");
    MsgDisp("主人公","Yes, it's handmade.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("L040500004_05_030");
    MsgDisp("Hiiragi","I can see that you made it while keeping
me in mind.");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("L040500004_05_040");
    MsgDisp("Hiiragi","See, in this topping as well.");
    MsgDisp("主人公","I'm glad you like it.");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("L040500004_05_050");
    MsgDisp("Hiiragi","There is no chance that I wouldn't.
It's the only chocolate in the world that
was made exclusively for me, no?");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("L040500004_05_060");
    MsgDisp("Hiiragi","I thank you.
I shall have a taste of it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝ seemed happy.
Thank goodness......)");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4,1);
    VoicePlay("L040500004_05_070");
    MsgDisp("Hiiragi","I see this is handmade.");
    MsgDisp("主人公","Don't look too closely......
You may see some rough edges.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("L040500004_05_080");
    MsgDisp("Hiiragi","Rough?
If by chance such a part exists, it too
was made by you while keeping me in mind.");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("L040500004_05_090");
    MsgDisp("Hiiragi","Yes, the result is quite lovely.");
    MsgDisp("主人公","Hehe, thanks......
I feel a little shy.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("L040500004_05_100");
    MsgDisp("Hiiragi","Today is that kind of day, no?
I can say things that would usually be too
embarrassing.");
    MsgDisp("主人公","Is that so?");
    ChMotion(5,4);
    VoicePlay("L040500004_05_110");
    MsgDisp("Hiiragi","It is.");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("L040500004_05_120");
    MsgDisp("Hiiragi","I will enjoy eating it slowly.
If possible, for one year.
Thank you very much.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝ seems happy.
But he might be a little confused about
Valentine's Day?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
