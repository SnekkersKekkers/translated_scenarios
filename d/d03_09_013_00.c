BGOpen("ho210",2);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(...
Huh?
I missed a call on my cellphone.)");
MsgDisp("主人公","(A private number.
Maybe it's from Kuya-san?)");
MsgDisp("主人公","(What should I do...
Should I wait for him to call back?)");
MsgSel("Wait for him to call back","Go to sleep");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(He might call back, so let's wait a bit!)");
    MsgClose();
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Ah!
A private number...
But I'm sure it'll be fine.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","...Hello?");
    VoicePlay("D030901300_09_000");
    MsgDisp("Kuya","Ah...
Sorry.
I called again from a private number.");
    MsgDisp("主人公","Like I thought, it's Kuya-san!");
    VoicePlay("D030901300_09_010");
    MsgDisp("Kuya","Yeah.
I'm not a suspicious person, right?");
    MsgDisp("主人公","Hehe!");
    VoicePlay("D030901300_08_000");
    MsgDisp("Daichi?","What's suspicious?");
    VoicePlay("D030901300_45_000");
    MsgDisp("Shirahane Mayo?","Wait, Kuya, who are you calling?");
    VoicePlay("D030901300_09_020");
    MsgDisp("Kuya","Wait a moment...");
    VoicePlay("D030901300_09_030");
    MsgDisp("Kuya","Can the two of you be quiet.
This is a very important phone call.");
    VoicePlay("D030901300_09_040");
    MsgDisp("Kuya","...Sigh.
Sorry to keep you waiting.");
    MsgDisp("主人公","It's fine...
It sounds kind of fun there, huh?");
    VoicePlay("D030901300_09_050");
    MsgDisp("Kuya","Fun?
...I guess so.
The Shirahane family is pretty fun.");
    MsgDisp("主人公","Hehe.
By the way, what's so important?");
    VoicePlay("D030901300_09_060");
    MsgDisp("Kuya","I wanted to hear your voice again.");
    VoicePlay("D030901300_08_010");
    MsgDisp("Daichi?","Bro, ya got yourself a girlfriend huh...");
    VoicePlay("D030901300_09_070");
    MsgDisp("Kuya","......");
    VoicePlay("D030901300_09_080");
    MsgDisp("Kuya","It's fun but there's not a lot of privacy.
This is not what I expected...");
    MsgDisp("主人公","Hehe!
What an energetic and happy family.");
    VoicePlay("D030901300_09_090");
    MsgDisp("Kuya","If you want to, I'll invite you here
someday.
To meet the energetic Shirahane family.");
    VoicePlay("D030901300_09_100");
    MsgDisp("Kuya","...Okay.
It was short-lived, but I got it done.
I guess I can study a bit harder now.");
    MsgDisp("主人公","Yep, I'll also keep working hard on my
\"studies\" and my \"art\".");
    VoicePlay("D030901300_09_110");
    MsgDisp("Kuya","Good.
Later, then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hehe, I think I got to see a slightly
different Kuya-san than usual?)");
    break ;
    case 1:
    MsgDisp("主人公","...Well, whatever.
Time to sleep.");
    MsgDisp("主人公","(If it was something important, he would
have left a voicemail.
Maybe it's not even him.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
