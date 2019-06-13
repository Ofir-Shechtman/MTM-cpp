//
// Created by Yossi Levi on 08/06/2019.
//

#include <iostream>
#include <string.h>
using std::string;
#include "../eurovision.h"

using std::cout;
using std::endl;



void TEST8(){
    freopen ("../test8myresult.txt","w",stdout);
    MainControl eurovision;
    Participant p1("netherlands","song_netherlands",107,"singer_netherlands");
    cout<<p1<<endl;
    Participant p2("greece","song_greece",161,"singer_greece");
    cout<<p2<<endl;
    Participant p3("serbia","song_serbia",120,"singer_serbia");
    cout<<p3<<endl;
    Participant p4("bulgaria","song_bulgaria",206,"singer_bulgaria");
    cout<<p4<<endl;
    Participant p5("croatia","song_croatia",111,"singer_croatia");
    cout<<p5<<endl;
    Participant p6("turkey","song_turkey",228,"singer_turkey");
    cout<<p6<<endl;
    Participant p7("uk","song_uk",210,"singer_uk");
    cout<<p7<<endl;
    Participant p8("croatia","song_croatia",214,"singer_croatia");
    cout<<p8<<endl;
    Participant p9("sweden","song_sweden",139,"singer_sweden");
    cout<<p9<<endl;
    Participant p10("georgia","song_georgia",111,"singer_georgia");
    cout<<p10<<endl;
    Participant p11("uk","song_uk",175,"singer_uk");
    cout<<p11<<endl;
    Participant p12("malta","song_malta",149,"singer_malta");
    cout<<p12<<endl;
    Participant p13("latvia","song_latvia",128,"singer_latvia");
    cout<<p13<<endl;
    Participant p14("serbia","song_serbia",144,"singer_serbia");
    cout<<p14<<endl;
    Participant p15("kazakhastan","song_kazakhastan",151,"singer_kazakhastan");
    cout<<p15<<endl;
    Participant p16("bulgaria","song_bulgaria",168,"singer_bulgaria");
    cout<<p16<<endl;
    Participant p17("lithiania","song_lithiania",174,"singer_lithiania");
    cout<<p17<<endl;
    Participant p18("norway","song_norway",115,"singer_norway");
    cout<<p18<<endl;
    Participant p19("norway","song_norway",171,"singer_norway");
    cout<<p19<<endl;
    Participant p20("turkey","song_turkey",191,"singer_turkey");
    cout<<p20<<endl;
    Participant p21("armenia","song_armenia",111,"singer_armenia");
    cout<<p21<<endl;
    Participant p22("greece","song_greece",133,"singer_greece");
    cout<<p22<<endl;
    Participant p23("ireland","song_ireland",199,"singer_ireland");
    cout<<p23<<endl;
    Participant p24("germany","song_germany",142,"singer_germany");
    cout<<p24<<endl;
    Participant p25("italy","song_italy",193,"singer_italy");
    cout<<p25<<endl;
    Participant p26("france","song_france",152,"singer_france");
    cout<<p26<<endl;
    Participant p27("belgium","song_belgium",217,"singer_belgium");
    cout<<p27<<endl;
    Participant p28("slovakia","song_slovakia",142,"singer_slovakia");
    cout<<p28<<endl;
    Participant p29("austria","song_austria",169,"singer_austria");
    cout<<p29<<endl;
    Participant p30("georgia","song_georgia",153,"singer_georgia");
    cout<<p30<<endl;
    Participant p31("kazakhastan","song_kazakhastan",108,"singer_kazakhastan");
    cout<<p31<<endl;
    Participant p32("armenia","song_armenia",165,"singer_armenia");
    cout<<p32<<endl;
    Participant p33("estonia","song_estonia",115,"singer_estonia");
    cout<<p33<<endl;
    Participant p34("norway","song_norway",181,"singer_norway");
    cout<<p34<<endl;
    Participant p35("netherlands","song_netherlands",184,"singer_netherlands");
    cout<<p35<<endl;
    Participant p36("latvia","song_latvia",141,"singer_latvia");
    cout<<p36<<endl;
    p10.update("new_song",0,"");
    p25.update("new_song",0,"");
    p19.update("new_song",0,"");
    p5.update("new_song",0,"");
    p35.update("new_song",0,"newsinger");
    p33.update("new_song",0,"newsinger");
    p23.update("new_song",0,"newsinger");
    p8.update("new_song",0,"newsinger");
    p28.update("new_song",107,"newsinger");
    p22.update("new_song",154,"newsinger");
    p27.update("new_song",127,"newsinger");
    p2.update("new_song",121,"newsinger");
    cout<<eurovision<<endl;
    eurovision+=p2;
    eurovision+=p24;
    eurovision+=p36;
    eurovision+=p16;
    eurovision+=p20;
    eurovision+=p28;
    eurovision+=p6;
    eurovision+=p27;
    eurovision+=p30;
    eurovision+=p24;
    eurovision+=p32;
    eurovision+=p24;
    eurovision+=p8;
    eurovision+=p12;
    cout<<eurovision<<endl;
    eurovision+=p33;
    eurovision+=p29;
    eurovision+=p19;
    eurovision-=p32;
    eurovision-=p28;
    eurovision+=p26;
    eurovision-=p34;
    eurovision+=p17;
    eurovision+=p15;
    eurovision+=p31;
    eurovision-=p34;
    eurovision-=p27;
    eurovision+=p15;
    eurovision-=p34;
    eurovision+=p8;
    eurovision+=p31;
    eurovision-=p19;
    eurovision+=p4;
    eurovision+=p17;
    eurovision+=p32;
    eurovision+=p32;
    eurovision+=p34;
    eurovision-=p31;
    eurovision-=p18;
    cout<<eurovision<<endl;
    (((((eurovision-=p13)+=p20)-=p17)-=p21)+=p9)+=p5;
    eurovision.setPhase(Contest);
    eurovision.setPhase(Voting);
    std::cout<<eurovision.participate("andora")<<std::endl;
    std::cout<<eurovision.participate("norway")<<std::endl;
    std::cout<<eurovision.participate("italy")<<std::endl;
    std::cout<<eurovision.participate("serbia")<<std::endl;
    std::cout<<eurovision.participate("ireland")<<std::endl;
    std::cout<<eurovision.participate("turkey")<<std::endl;
    std::cout<<eurovision.participate("sweden")<<std::endl;
    std::cout<<eurovision.participate("hungary")<<std::endl;
    std::cout<<eurovision.participate("malta")<<std::endl;
    std::cout<<eurovision.participate("bosnia")<<std::endl;
    std::cout<<eurovision.participate("bulgaria")<<std::endl;
    std::cout<<eurovision.participate("armenia")<<std::endl;
    std::cout<<eurovision.participate("belgium")<<std::endl;
    std::cout<<eurovision.participate("austria")<<std::endl;
    p11.update("",120,"");
    cout<<p11<<endl;
    p27.update("",120,"");
    cout<<p27<<endl;
    p9.update("",120,"");
    cout<<p9<<endl;
    p1.update("",120,"");
    cout<<p1<<endl;
    p20.update("",120,"");
    cout<<p20<<endl;
    p12.update("",120,"");
    cout<<p12<<endl;
    p17.update("",120,"");
    cout<<p17<<endl;
    p27.update("",120,"");
    cout<<p27<<endl;
    p23.update("",120,"");
    cout<<p23<<endl;
    p11.update("",120,"");
    cout<<p11<<endl;
    p30.update("",120,"");
    cout<<p30<<endl;
    p18.update("",120,"");
    cout<<p18<<endl;
    p7.update("",120,"");
    cout<<p7<<endl;
    p18.update("",120,"");
    cout<<p18<<endl;
    Voter v1("belgium",Judge);
    Voter v2("slovenia",Regular);
    Voter v3("andora",Regular);
    Voter v4("greece",Judge);
    Voter v5("serbia",Judge);
    Voter v6("ukraine");
    Voter v7("italy",Judge);
    Voter v8("slovakia",Judge);
    Voter v9("greece",Regular);
    Voter v10("armenia",Regular);
    Voter v11("malta");
    Voter v12("georgia");
    Voter v13("serbia",Regular);
    Voter v14("norway",Judge);
    Voter v15("austria",Judge);
    Voter v16("netherlands",Judge);
    Voter v17("russia");
    Voter v18("ukraine",Judge);
    Voter v19("moldova",Judge);
    Voter v20("kazakhastan");
    Voter v21("italy");
    Voter v22("malta",Regular);
    Voter v23("germany",Regular);
    Voter v24("luxembourg",Regular);
    Voter v25("moldova",Regular);
    Voter v26("slovenia",Judge);
    Voter v27("croatia",Regular);
    Voter v28("austria",Judge);
    Voter v29("luxembourg");
    Voter v30("luxembourg",Regular);
    Voter v31("norway",Regular);
    Voter v32("slovakia");
    Voter v33("israel");
    Voter v34("slovenia",Judge);
    Voter v35("latvia",Regular);
    Voter v36("andora");
    Voter v37("sweden",Regular);
    Voter v38("cyrpus");
    Voter v39("kazakhastan",Judge);
    Voter v40("latvia");
    Voter v41("turkey",Judge);
    Voter v42("georgia");
    Voter v43("greece",Regular);
    Voter v44("ukraine");
    Voter v45("sweden");
    Voter v46("georgia");
    Voter v47("uk",Regular);
    Voter v48("russia");
    Voter v49("moldova",Regular);
    Voter v50("andora");
    Voter v51("slovakia",Judge);
    Voter v52("sweden",Regular);
    Voter v53("slovenia");
    Voter v54("kazakhastan",Regular);
    Voter v55("kazakhastan",Judge);
    Voter v56("netherlands",Judge);
    Voter v57("italy",Regular);
    Voter v58("germany",Regular);
    Voter v59("switzerland");
    Voter v60("croatia");
    Voter v61("serbia");
    Voter v62("armenia",Judge);
    Voter v63("malta",Judge);
    Voter v64("slovakia",Judge);
    Voter v65("croatia",Judge);
    Voter v66("georgia",Regular);
    Voter v67("greece");
    Voter v68("malta",Regular);
    Voter v69("armenia");
    Voter v70("spain");
    Voter v71("netherlands",Judge);
    Voter v72("cyrpus",Judge);
    Voter v73("moldova");
    Voter v74("sweden");
    Voter v75("israel");
    Voter v76("croatia",Regular);
    Voter v77("kazakhastan",Judge);
    Voter v78("norway");
    Voter v79("sweden");
    Voter v80("belgium",Judge);
    Voter v81("russia",Judge);
    Voter v82("latvia");
    Voter v83("malta");
    Voter v84("georgia",Regular);
    Voter v85("bosnia");
    Voter v86("slovakia",Regular);
    Voter v87("belarus",Judge);
    Voter v88("russia");
    Voter v89("turkey");
    Voter v90("georgia",Regular);
    Voter v91("austria",Regular);
    Voter v92("ireland",Regular);
    Voter v93("slovenia",Judge);
    Voter v94("italy",Regular);
    Voter v95("georgia");
    Voter v96("spain",Judge);
    Voter v97("belarus");
    Voter v98("kazakhastan");
    Voter v99("austria",Regular);
    cout<<eurovision<<endl;
    eurovision+=Vote(v24,"kazakhastan");
    eurovision+=Vote(v55,"bulgaria","israel","armenia");
    eurovision+=Vote(v46,"ukraine");
    eurovision+=Vote(v92,"slovenia");
    eurovision+=Vote(v42,"cyrpus");
    eurovision+=Vote(v37,"greece");
    eurovision+=Vote(v48,"malta");
    eurovision+=Vote(v37,"lithiania");
    eurovision+=Vote(v75,"switzerland");
    eurovision+=Vote(v97,"malta");
    eurovision+=Vote(v80,"latvia","slovakia","kazakhastan","austria","belarus");
    eurovision+=Vote(v32,"armenia");
    eurovision+=Vote(v9,"ukraine");
    eurovision+=Vote(v66,"belarus");
    eurovision+=Vote(v91,"belgium");
    eurovision+=Vote(v78,"bosnia");
    eurovision+=Vote(v77,"kazakhastan","estonia","austria","sweden");
    eurovision+=Vote(v49,"serbia");
    eurovision+=Vote(v82,"israel");
    eurovision+=Vote(v56,"sweden","italy","hungary","moldova");
    eurovision+=Vote(v3,"lithiania");
    eurovision+=Vote(v96,"belgium","turkey");
    eurovision+=Vote(v9,"ukraine");
    eurovision+=Vote(v98,"norway");
    eurovision+=Vote(v20,"kazakhastan");
    eurovision+=Vote(v98,"belarus");
    eurovision+=Vote(v34,"ukraine","ireland","israel","belarus","georgia","ukraine","turkey");
    eurovision+=Vote(v35,"lithiania");
    eurovision+=Vote(v74,"armenia");
    eurovision+=Vote(v79,"belgium");
    eurovision+=Vote(v86,"israel");
    eurovision+=Vote(v15,"latvia","netherlands","lithiania","georgia");
    eurovision+=Vote(v94,"belarus");
    eurovision+=Vote(v38,"turkey");
    eurovision+=Vote(v27,"israel");
    eurovision+=Vote(v46,"cyrpus");
    eurovision+=Vote(v55,"moldova","germany","georgia","france");
    eurovision+=Vote(v57,"turkey");
    eurovision+=Vote(v58,"russia");
    eurovision+=Vote(v12,"bosnia");
    eurovision+=Vote(v58,"moldova");
    eurovision+=Vote(v79,"spain");
    eurovision+=Vote(v52,"belgium");
    eurovision+=Vote(v44,"ireland");
    eurovision+=Vote(v17,"lithiania");
    eurovision+=Vote(v17,"belgium");
    eurovision+=Vote(v60,"austria");
    eurovision+=Vote(v24,"hungary");
    eurovision+=Vote(v6,"moldova");
    eurovision+=Vote(v89,"andora");
    eurovision+=Vote(v1,"lithiania","slovenia","armenia","kazakhastan","slovakia","italy","ukraine","cyrpus","russia");
    eurovision+=Vote(v92,"italy");
    eurovision+=Vote(v13,"germany");
    eurovision+=Vote(v95,"sweden");
    eurovision+=Vote(v80,"slovenia","croatia");
    eurovision+=Vote(v68,"ukraine");
    eurovision+=Vote(v71,"serbia","latvia","ukraine","turkey","bosnia","cyrpus","germany");
    eurovision+=Vote(v84,"estonia");
    eurovision+=Vote(v2,"belarus");
    eurovision+=Vote(v36,"lithiania");
    eurovision+=Vote(v6,"serbia");
    eurovision+=Vote(v70,"italy");
    eurovision+=Vote(v53,"italy");
    eurovision+=Vote(v62,"moldova","spain");
    eurovision+=Vote(v94,"ireland");
    eurovision+=Vote(v93,"serbia","bosnia","belarus","georgia");
    eurovision+=Vote(v68,"andora");
    eurovision+=Vote(v20,"malta");
    eurovision+=Vote(v99,"cyrpus");
    eurovision+=Vote(v93,"slovenia","russia","switzerland");
    eurovision+=Vote(v20,"armenia");
    eurovision+=Vote(v35,"ukraine");
    eurovision+=Vote(v52,"armenia");
    eurovision+=Vote(v57,"lithiania");
    eurovision+=Vote(v90,"georgia");
    eurovision+=Vote(v42,"kazakhastan");
    eurovision+=Vote(v72,"france","andora","spain");
    eurovision+=Vote(v23,"hungary");
    eurovision+=Vote(v85,"spain");
    eurovision+=Vote(v64,"armenia","switzerland","lithiania","luxembourg","italy","norway","belarus","latvia");
    eurovision+=Vote(v9,"kazakhastan");
    eurovision+=Vote(v51,"germany","france","cyrpus","netherlands","latvia","switzerland","spain");
    eurovision+=Vote(v56,"slovakia","hungary","latvia","armenia","russia");
    eurovision+=Vote(v40,"spain");
    eurovision+=Vote(v23,"hungary");
    eurovision+=Vote(v63,"italy","armenia","italy","israel","austria","turkey");
    eurovision+=Vote(v21,"bosnia");
    eurovision+=Vote(v86,"malta");
    eurovision+=Vote(v96,"austria","belarus","turkey","sweden","croatia","italy","switzerland","kazakhastan");
    eurovision+=Vote(v12,"hungary");
    eurovision+=Vote(v23,"serbia");
    eurovision+=Vote(v70,"greece");
    eurovision+=Vote(v90,"sweden");
    eurovision+=Vote(v58,"latvia");
    eurovision+=Vote(v58,"serbia");
    eurovision+=Vote(v55,"georgia","russia","estonia","ukraine","bosnia","cyrpus");
    eurovision+=Vote(v29,"slovakia");
    eurovision+=Vote(v31,"latvia");
    eurovision+=Vote(v4,"slovenia","croatia","turkey","belarus","italy","kazakhastan","norway");
    eurovision+=Vote(v26,"switzerland","belarus","ukraine","norway","netherlands","slovenia","croatia");
    eurovision+=Vote(v85,"norway");
    eurovision+=Vote(v78,"sweden");
    eurovision+=Vote(v37,"turkey");
    eurovision+=Vote(v32,"serbia");
    eurovision+=Vote(v77,"malta","luxembourg","bosnia");
    eurovision+=Vote(v25,"croatia");
    eurovision+=Vote(v31,"russia");
    eurovision+=Vote(v90,"norway");
    eurovision+=Vote(v98,"ukraine");
    eurovision+=Vote(v5,"luxembourg","cyrpus","slovakia","belgium");
    eurovision+=Vote(v19,"latvia","norway","austria","latvia","turkey");
    eurovision+=Vote(v7,"cyrpus","sweden","armenia","belarus","malta");
    eurovision+=Vote(v93,"ukraine","hungary","slovenia");
    eurovision+=Vote(v6,"hungary");
    eurovision+=Vote(v32,"lithiania");
    eurovision+=Vote(v27,"andora");
    eurovision+=Vote(v88,"serbia");
    eurovision+=Vote(v87,"france","spain","germany","croatia","austria","lithiania");
    eurovision+=Vote(v99,"italy");
    eurovision+=Vote(v26,"andora","malta","armenia","switzerland","italy","france");
    eurovision+=Vote(v39,"turkey","greece");
    eurovision+=Vote(v2,"greece");
    eurovision+=Vote(v43,"belgium");
    eurovision+=Vote(v16,"italy","latvia","malta","spain","ireland");
    eurovision+=Vote(v65,"germany","moldova","ireland","hungary","andora","italy");
    eurovision+=Vote(v52,"sweden");
    eurovision+=Vote(v69,"serbia");
    eurovision+=Vote(v36,"russia");
    eurovision+=Vote(v57,"croatia");
    eurovision+=Vote(v16,"norway","andora","malta","slovakia","serbia","ireland","spain","ukraine","belarus");
    eurovision+=Vote(v18,"hungary","malta","armenia","serbia","croatia","norway","italy","switzerland","ireland","bosnia");
    eurovision+=Vote(v64,"serbia","georgia","netherlands","armenia","belarus","ukraine","moldova","serbia","andora");
    eurovision+=Vote(v9,"netherlands");
    eurovision+=Vote(v64,"hungary","malta","turkey","hungary","switzerland");
    eurovision+=Vote(v49,"cyrpus");
    eurovision+=Vote(v12,"ukraine");
    eurovision+=Vote(v58,"israel");
    eurovision+=Vote(v5,"armenia","ireland","moldova","armenia");
    eurovision+=Vote(v86,"slovakia");
    eurovision+=Vote(v66,"serbia");
    eurovision+=Vote(v51,"netherlands","sweden","slovakia","italy","estonia","greece","spain","bulgaria","austria");
    eurovision+=Vote(v55,"israel","spain","france","luxembourg","sweden","norway","serbia","kazakhastan");
    eurovision+=Vote(v95,"turkey");
    eurovision+=Vote(v88,"latvia");
    eurovision+=Vote(v81,"greece","norway","bulgaria","germany","cyrpus","italy","malta","russia","moldova");
    eurovision+=Vote(v26,"malta","switzerland","croatia","russia","turkey","estonia","israel");
    eurovision+=Vote(v64,"estonia","kazakhastan","turkey","belgium","malta","latvia");
    eurovision+=Vote(v34,"turkey","bulgaria","latvia");
    eurovision+=Vote(v3,"hungary");
    eurovision+=Vote(v50,"belgium");
    eurovision+=Vote(v9,"moldova");
    eurovision+=Vote(v81,"bulgaria","andora","kazakhastan");
    eurovision+=Vote(v25,"slovenia");
    eurovision+=Vote(v12,"serbia");
    eurovision+=Vote(v32,"latvia");
    eurovision+=Vote(v36,"greece");
    eurovision+=Vote(v66,"georgia");
    eurovision+=Vote(v75,"ireland");
    eurovision+=Vote(v40,"greece");
    eurovision+=Vote(v72,"switzerland","austria","croatia","belgium","moldova","sweden","norway","belarus","ireland","kazakhastan");
    eurovision+=Vote(v98,"kazakhastan");
    eurovision+=Vote(v35,"kazakhastan");
    eurovision+=Vote(v82,"andora");
    eurovision+=Vote(v41,"moldova","andora","russia","greece","latvia","cyrpus","croatia");
    eurovision+=Vote(v16,"kazakhastan","sweden","italy","georgia","netherlands");
    eurovision+=Vote(v55,"bulgaria","cyrpus","estonia");
    eurovision+=Vote(v58,"luxembourg");
    eurovision+=Vote(v53,"slovenia");
    eurovision+=Vote(v91,"luxembourg");
    eurovision+=Vote(v72,"malta","russia");
    eurovision+=Vote(v42,"netherlands");
    eurovision+=Vote(v47,"norway");
    eurovision+=Vote(v42,"italy");
    eurovision+=Vote(v80,"italy","georgia","cyrpus","andora","greece");
    eurovision+=Vote(v95,"austria");
    eurovision+=Vote(v79,"croatia");
    eurovision+=Vote(v92,"bosnia");
    eurovision+=Vote(v43,"latvia");
    eurovision+=Vote(v88,"armenia");
    eurovision+=Vote(v80,"france","moldova","hungary");
    eurovision+=Vote(v35,"spain");
    eurovision+=Vote(v99,"israel");
    eurovision+=Vote(v76,"ukraine");
    eurovision+=Vote(v56,"cyrpus","andora","turkey","slovakia","estonia");
    eurovision+=Vote(v84,"estonia");
    eurovision+=Vote(v71,"latvia","andora");
    eurovision+=Vote(v61,"ireland");
    eurovision+=Vote(v43,"serbia");
    eurovision+=Vote(v40,"switzerland");
    eurovision+=Vote(v13,"lithiania");
    eurovision+=Vote(v68,"slovakia");
    eurovision+=Vote(v14,"switzerland","turkey","slovenia");
    eurovision+=Vote(v51,"andora","malta");
    eurovision+=Vote(v15,"netherlands","armenia","croatia","bulgaria","belgium","estonia","sweden");
    eurovision+=Vote(v45,"georgia");
    eurovision+=Vote(v57,"slovakia");
    eurovision+=Vote(v86,"slovakia");
    eurovision+=Vote(v86,"austria");
    eurovision+=Vote(v73,"andora");
    cout<<eurovision<<endl;

}
