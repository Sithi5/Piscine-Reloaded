ifconfig | grep -i ether | sed "s/ether//g" | tr -d ' ' | tr -d '\t'
