MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("G020540002_05_000");
MsgDisp("Hiiragi","The fireflies here live mush longer than
normal fireflies, huh?");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("G020540002_05_010");
MsgDisp("Hiiragi","It's mysterious.
There are also rumours about inner voices,
hust how many secrets are there...");
MsgDisp("主人公","Could it be due to the benefits of the
spring water?");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("G020540002_05_020");
MsgDisp("Hiiragi","I see, the spring water.
You do often hear about the longevity
effects of spring water.");
ChEye(5,4);
VoicePlay("G020540002_05_030");
MsgDisp("Hiiragi","But conversely, how could hearing the
other's inner voice be explained?");
MsgDisp("主人公","Hmm, are you really hearing it?");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("G020540002_05_040");
MsgDisp("Hiiragi","Are you not able to hear it?");
MsgDisp("主人公","Eh∋
｛柊＊＊＊｝ can hear it?");
ChEye(5,3);
ChMotion(5,0);
VoicePlay("G020540002_05_050");
MsgDisp("Hiiragi","Hehe.
I was just checking if you could hear
them.");
MsgDisp("主人公","(Ugh...｛柊＊＊＊｝ from time to time will
say unexpected things that surprise me...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
