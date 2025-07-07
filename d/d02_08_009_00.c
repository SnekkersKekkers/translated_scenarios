BGOpen("ar300",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Alright, alright......Okay, stop!
Welcome!");
MsgDisp("主人公","(｛大地＊＊｝ is running late today.)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ScrFadeIn(0);
MsgDisp("主人公","Thank you so much!");
MsgDisp("主人公","Uhm......Manager.
Did Shirahane-kun take the day off?");
VoicePlay("D020800900_40_000");
MsgDisp("Manager","Ahh, Daichi-kun called me suddenly
yesterday. He said he was quitting his
part-time job here. I was so shocked......");
MsgDisp("主人公","Ehh∋");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("ex000",1);
MsgClose();
ScrFadeIn(0);
SEPlay("EV_SE_579");
MsgDisp("主人公","Ah!
｛大地＊＊｝ is calling!");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
SEWait();
MsgDisp("主人公","Hello, ｛大地＊＊｝∋");
VoicePlay("D020800900_08_000");
MsgDisp("Shirahane","Ah......Yeah.");
MsgDisp("主人公","What a relief......
It scared me when I heard that you
suddenly quit your job......");
VoicePlay("D020800900_08_010");
MsgDisp("Shirahane","......Dontcha worry, okay?
I hafta work really hard to catch up.");
MsgDisp("主人公","What do you mean?");
VoicePlay("D020800900_08_020");
MsgDisp("Shirahane","I'm gonna catch up with ya.
No, actually......I'm gonna overtake ya.");
VoicePlay("D020800900_08_030");
MsgDisp("Shirahane","I'm tired of bein' second place.
Now I'm gonna be the real topdog.");
MsgDisp("主人公","Are you talking about the entrance
exam? But you're an honor student too
so what does that have to do with me......");
VoicePlay("D020800900_08_040");
MsgDisp("Shirahane","You're an honor student at Habataki
and I'm an honor student at Hanegasaki.
......Now do you get what I'm sayin?");
MsgDisp("主人公","Yeah.
But why so suddenly?");
VoicePlay("D020800900_08_050");
MsgDisp("Shirahane","I just realized.
In order to be at your side, I need
to become the perfect man.");
MsgDisp("主人公","......Eh?");
VoicePlay("D020800900_08_060");
MsgDisp("Shirahane","I'm gonna be your number one.
But don't worry your head over it.
You don't have to quit suddenly too.");
MsgDisp("主人公","I......");
MsgSel("I'll quit working at the gas station.","I'll cheer ｛大地＊＊｝ on!");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Since ｛大地＊＊｝ is quitting,
I'll quit too!");
    VoicePlay("D020800900_08_070");
    MsgDisp("Shirahane","Ehh∋
You're fired up......?");
    MsgDisp("主人公","I'm not going to lose to 
｛大地＊＊｝. I need to study for the exam.");
    VoicePlay("D020800900_08_080");
    MsgDisp("Shirahane","Wait......Are ya listenin' to me?
If ya do that then I won't be able ta
beatcha......");
    MsgDisp("主人公","Hehe!");
    VoicePlay("D020800900_08_090");
    MsgDisp("Shirahane","Haha......Just like ya'd expect from
a scholar like yourself. Now I'm fired
up too!");
    VoicePlay("D020800900_08_100");
    MsgDisp("Shirahane","Let's try our best!
But we can still go on dates, right?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(｛大地＊＊｝ seems serious.
I'll study hard for the entrance exams
too!)");
    MsgDisp("","(I quit my part-time job at 
\"Stallion Gas\".)");
    break ;
    case 1:
    MsgDisp("主人公","I'm rooting for ｛大地＊＊｝!
Good luck!");
    VoicePlay("D020800900_08_110");
    MsgDisp("Shirahane","That's huge.
Just knowin' that you're cheerin' me on
makes me feel energized.");
    MsgDisp("主人公","Hehe.");
    VoicePlay("D020800900_08_120");
    MsgDisp("Shirahane","So you're going to keep working.
Take it easy, okay? I'm not there ta
help ya anymore......");
    MsgDisp("主人公","Yeah.
You taught me a lot already, so I'm
going to keep working hard!");
    VoicePlay("D020800900_08_130");
    MsgDisp("Shirahane","That's it.
I'll be right there with ya, giving it
my all studying for the entrance exams.");
    VoicePlay("D020800900_08_140");
    MsgDisp("Shirahane","Ah......But can we go on a date once in a
while? I'll miss seein' ya around......");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(｛大地＊＊｝ is concentrating
on his exams. I'll continue working
part-time a bit longer.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0);
