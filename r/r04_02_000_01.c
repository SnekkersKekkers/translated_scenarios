ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R040200001_02_000");
    MsgDisp("Sassa","That dress looks great on you.");
    MsgDisp("主人公","Really?　Thank you!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R040200001_02_010");
    MsgDisp("Sassa","I thought you were a princess
from a distant land.");
    MsgDisp("主人公","I think you're exaggerating a bit.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R040200001_02_020");
    MsgDisp("Sassa","No, I'm serious!");
    ChEye(2,2);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("R040200001_02_030");
    MsgDisp("Sassa","Well, when I see a dress,
I automatically think of a princess.");
    MsgDisp("主人公","Huh?");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R040200001_02_040");
    MsgDisp("Sassa","You look like a princess.");
    MsgDisp("主人公","Really?
Does it suit me?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R040200001_02_050");
    MsgDisp("Sassa","Of course it does. 
You have a different atmosphere from 
always, so my heart raced.");
    MsgDisp("主人公","Hehe. 
Have I already said you also look 
cool, ｛颯砂＊＊｝?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R040200001_02_060");
    MsgDisp("Sassa","Maybe?
If that's what you think.");
    MsgDisp("主人公","Don't you like your outfit?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("R040200001_02_070");
    MsgDisp("Sassa","The length is fine, but it's a bit 
uptight, I can't eat with this.");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R040200001_02_080");
    MsgDisp("Sassa","Woah, you look nice.
Especially your dress.");
    MsgDisp("主人公","You really like it?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R040200001_02_090");
    MsgDisp("Sassa","Yeah. It makes me feel like floating 
when I'm next to you.");
    MsgDisp("主人公","Floating?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R040200001_02_100");
    MsgDisp("Sassa","I think I'm flustered.");
    MsgDisp("主人公","Hehe, thank you.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2);
    ChCheek(2,10);
    VoicePlay("R040200001_02_110");
    MsgDisp("Sassa","How do I look? People are
saying I look a wedding groom.");
    MsgDisp("主人公","Yeah. You do look like a
wedding groom.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,5);
    VoicePlay("R040200001_02_120");
    MsgDisp("Sassa","For real?
Then you would be the bride. And
this must be the wedding reception.");
    MsgDisp("主人公","Huh∋");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
